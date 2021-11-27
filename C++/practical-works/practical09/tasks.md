# Practical9 - Class and Objects -

## Task1
Write a class named `Rectangle` to represent a rectangle. The class contains:
- Two double data fields named `width` and `height` that specify the width and height of the  rectangle.
- A no-arg constructor that creates a rectangle with width 1 and height 1.
- A constructor that creates a default rectangle with the specified width and height.
- The accessor and mutator functions for all the data fields.
- A function named `getArea()` that returns the area of this rectangle.
Write a test program that creates two Rectangle objects. Assign width 4 and height 40 to the first object and width 3.5 and height 35.9 to the second. Display the properties of both objects and find their areas and perimeters.

## Task2
Design a class named `Fan` to represent a fan. The class contains.
- An int data field named `speed` that specifies the speed of the fan. A fan has three speeds
indicated with a value 1, 2, or 3.
- A bool data field named `on` that specifies whether the fan is on.
- A double data field named `radius` that specifies the radius of the fan.
- A no-arg constructor that creates a default fan with speed 1, on false, and radius 5.
- The accessor and mutator functions for all the data fields.
Write a test program that creates two Fan objects. Assign speed 3, radius 10, and turn it on to the first object. Assign speed 2, radius 5, and turn it off to the second object. Invoke their accessor functions to display the fan properties.

## Task3
Design a class named `Account` that contains:
- An int data field named `id` for the account.
- A double data field named `balance` for the account.
- A double data field named `annualInterestRate` that stores the current interest
rate.
- A no-arg constructor that creates a default account with id 0, balance 0, and
- annualInterestRate 0.
- The accessor and mutator functions for id, balance, and annualInterestRate.
- A function named `getMonthlyInterestRate()` that returns the monthly interest
rate.
- A function named `withdraw(amount)` that withdraws a specified amount from the account.
- A function named `deposit(amount)` that deposits a specified amount to the account. Write a test program that creates an Account object with an account ID of 1122, a balance of 20000, and an annual interest rate of 4.5%. Use the withdraw function to withdraw $2500, use the deposit function to deposit $3000, and print the balance, the monthly interest.