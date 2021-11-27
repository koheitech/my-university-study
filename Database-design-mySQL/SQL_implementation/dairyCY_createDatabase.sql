-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema DairyCY
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema DairyCY
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `DairyCY` DEFAULT CHARACTER SET utf8 ;
USE `DairyCY` ;

-- -----------------------------------------------------
-- Table `DairyCY`.`partner`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`partner` (
  `partnerID` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(45) NOT NULL,
  `country` VARCHAR(45) NOT NULL,
  `city` VARCHAR(45) NULL,
  `street` VARCHAR(45) NOT NULL,
  `ZIP` INT NULL,
  PRIMARY KEY (`partnerID`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`contactPerson`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`contactPerson` (
  `contactID` INT NOT NULL AUTO_INCREMENT,
  `partner_partnerID` INT NOT NULL,
  `name` VARCHAR(45) NOT NULL,
  `email` VARCHAR(100) NOT NULL,
  `phone` INT NOT NULL,
  PRIMARY KEY (`contactID`, `partner_partnerID`),
  INDEX `fk_contactPerson_partner_idx` (`partner_partnerID` ASC) VISIBLE,
  CONSTRAINT `fk_contactPerson_partner`
    FOREIGN KEY (`partner_partnerID`)
    REFERENCES `DairyCY`.`partner` (`partnerID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`order`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`order` (
  `orderNumber` INT NOT NULL,
  `date` DATETIME NOT NULL,
  `status` TINYINT(1) NOT NULL,
  `subtotal` DECIMAL(9,2) NOT NULL,
  `tax` DECIMAL(9,2) NOT NULL,
  `discount` DECIMAL(9,2) NOT NULL DEFAULT 0,
  `total` DECIMAL(9,2) NOT NULL,
  `partner_partnerID` INT NOT NULL,
  PRIMARY KEY (`orderNumber`),
  INDEX `fk_order_partner1_idx` (`partner_partnerID` ASC) VISIBLE,
  CONSTRAINT `fk_order_partner1`
    FOREIGN KEY (`partner_partnerID`)
    REFERENCES `DairyCY`.`partner` (`partnerID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`product`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`product` (
  `productNumber` INT NOT NULL,
  `name` VARCHAR(45) NOT NULL,
  `unitPrice` DECIMAL(9,2) NOT NULL,
  `description` VARCHAR(1000) NULL,
  PRIMARY KEY (`productNumber`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`orderDetail`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`orderDetail` (
  `order_orderNumber` INT NOT NULL,
  `product_productNumber` INT NOT NULL,
  `quantity` INT NOT NULL,
  PRIMARY KEY (`order_orderNumber`, `product_productNumber`),
  INDEX `fk_orderDetail_product1_idx` (`product_productNumber` ASC) VISIBLE,
  CONSTRAINT `fk_orderDetail_order1`
    FOREIGN KEY (`order_orderNumber`)
    REFERENCES `DairyCY`.`order` (`orderNumber`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_orderDetail_product1`
    FOREIGN KEY (`product_productNumber`)
    REFERENCES `DairyCY`.`product` (`productNumber`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`ingredient`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`ingredient` (
  `idingredientNumber` INT NOT NULL,
  `name` VARCHAR(45) NOT NULL,
  `description` VARCHAR(1000) NULL,
  PRIMARY KEY (`idingredientNumber`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`factory`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`factory` (
  `factoryNumber` INT NOT NULL,
  `name` VARCHAR(45) NOT NULL,
  `country` VARCHAR(45) NOT NULL,
  `city` VARCHAR(45) NULL,
  `street` VARCHAR(45) NOT NULL,
  `ZIP` VARCHAR(45) NULL,
  PRIMARY KEY (`factoryNumber`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`factory_product`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`factory_product` (
  `factory_factoryNumber` INT NOT NULL,
  `product_productNumber` INT NOT NULL,
  INDEX `fk_factory_product_factory1_idx` (`factory_factoryNumber` ASC) VISIBLE,
  INDEX `fk_factory_product_product1_idx` (`product_productNumber` ASC) VISIBLE,
  CONSTRAINT `fk_factory_product_factory1`
    FOREIGN KEY (`factory_factoryNumber`)
    REFERENCES `DairyCY`.`factory` (`factoryNumber`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_factory_product_product1`
    FOREIGN KEY (`product_productNumber`)
    REFERENCES `DairyCY`.`product` (`productNumber`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `DairyCY`.`product_ingredient`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `DairyCY`.`product_ingredient` (
  `product_productNumber` INT NOT NULL,
  `ingredient_idingredientNumber` INT NOT NULL,
  INDEX `fk_product_ingredient_product1_idx` (`product_productNumber` ASC) VISIBLE,
  INDEX `fk_product_ingredient_ingredient1_idx` (`ingredient_idingredientNumber` ASC) VISIBLE,
  CONSTRAINT `fk_product_ingredient_product1`
    FOREIGN KEY (`product_productNumber`)
    REFERENCES `DairyCY`.`product` (`productNumber`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_product_ingredient_ingredient1`
    FOREIGN KEY (`ingredient_idingredientNumber`)
    REFERENCES `DairyCY`.`ingredient` (`idingredientNumber`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
