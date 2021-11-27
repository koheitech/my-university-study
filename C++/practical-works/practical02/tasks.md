# Practical2 - Function -

## Task1
Write a function that computes the sum of the digits in an integer. Use the following function header: double sumDigits(long n). For example, sumDigits(936) returns 18 (9 + 3 + 6). 
(Hint: Use the % operator to extract digits, and the / operator to remove the extracted digit. For instance, to extract 6 from 936, use 936 % 10 (= 6). To remove 6 from 936, use 936 / 10 (= 93). Use a loop to repeatedly extract and remove the digit until all the digits are extracted. Write a test program that prompts the user to enter an integer and displays the sum of all its digits

## Task2
Write a function to display a pattern as follows:
```
      1
     21 
    321 
   4321
  54321
 654321
7654321
```
The function header is `void displayPattern(int n)` and the above output is generated for n=7. Write a main program that asks the n from the user and uses this function.

## Task3
Write the following two functions:
Converts from feet to meters: double footToMeter(double foot). Converts from meters to feet: double meterToFoot(double meter). The formula for the conversion is meters = 0.305 * foot

## Task4
Write a function to compute the following series:
`f(n) = 1/3 + 1/8 + 1/15 + .... + 1/n(n_2)`

## Task5
Write a function that displays an n-by-n matrix using the following header: void printMatrix(int n)
Each element is 0 or 1, which is generated randomly. Write a test program that prompts the user to enter n and displays an n-by-n matrix.