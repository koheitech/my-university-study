/* ----- query1: Find partners in UK ----- */
SELECT *
FROM partner
WHERE country = 'UK';

/* ----- query2: show contact persons of 'dairy Japan' ----- */
SELECT
  p.partnerID,
  p.name,
  p.country,
  cp.firstName,
  cp.lastName,
  cp.email,
  cp.phone
FROM partner p
JOIN contactPerson cp USING(partnerID)
WHERE p.partnerID = 4

/* ----- query3: calculate the total amount for each order ----- */
SELECT
  orderNumber,
  (subtotal + (subtotal*tax))*(1-discount) AS 'Total amount'
FROM `order`

/* ----- query4: showing the product and quantity of the order No.1 ----- */
SELECT
  o.orderNumber,
  p.name AS 'product name',
  od.quantity,
  pa.name AS 'buying from'
FROM partner pa
JOIN `order` o USING (partnerID)
JOIN orderDetail od USING (orderNumber)
JOIN product p USING (productNumber)
WHERE o.orderNumber = 1;

/* ----- query5: showing the product whcich contains sugar as ingredient ----- */
SELECT
  p.name,
  p.unitPrice,
  i.name
FROM product p
JOIN product_ingredient pi USING (productNumber)
JOIN ingredient i USING (ingredientNumber)
WHERE ingredientNumber = 2

/* ----- query6: calculating the total amount for buying products ----- */
SELECT 
	SUM((subtotal + (subtotal*tax))*(1-discount)) AS 'Total amount bought'
FROM `order`
WHERE status = 0;

/* ----- query7: showing the product information produced by factory No.1 ----- */
SELECT *
FROM product
WHERE productNumber IN 
(
  SELECT productNumber
  FROM factory_product
  WHERE factoryNumber = 1
)

/* ----- query8:  showing product whose name contains word 'cheese' ----- */
SELECT *
FROM product
WHERE name REGEXP 'cheese'

/* ----- query9: showing partners with ZIP code----- */
SELECT *
FROM partner
WHERE ZIP IS NOT NULL

/* ----- query10: orders with dicount----- */
SELECT *
FROM `order`
WHERE discount <> 0