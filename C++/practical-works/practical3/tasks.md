# Practical3 - Array -

## Task1
Write a program that reads grades based on the following scheme:

Grade is A if score is >= best - 10;
Grade is B if score is >= best - 20;
Grade is C if score is >= best - 30;
Grade is D if score is >= best - 40;
Grade is F otherwise

The program prompts the user to enter the total number of students, then prompts the user to enter all of the scores, and concludes by displaying the grades.


## Task2
Write a program that reads at most 100 integers between 1 and 100 and counts the occurrence of each number. Assume the input ends with 0.

## Task3
Write a function that finds the smallest element in an array of double values using the following header:
`double min(double array[], int size)`
Write a test program that prompts the user to enter 10 numbers, invokes this function, and displays the minimum value.

## Task4
Two arrays list1 and list2 are strictly identical if they have the same length and `list1[i]` is equal to `list2[i]` for each i. Write a function that returns true if list1 and list2 are strictly identical using the following header:
`bool strictlyEqual(const int list1[], const int list2[], int size)`
Write a test program that prompts the user to enter two lists of integers and displays whether the two are strictly identical. The sample runs follow. Note that the first number in the input indicates the number of the elements in the list. This number is not part of the list. Assume the list size is maximum 20.

## Task5
Write the following function that tests whether the array has four consecutive numbers with the same value.
`bool isConsecutiveFour(const int values[], int size)`
Write a test program that prompts the user to enter a series of integers and displays if the series contains four consecutive numbers with the same value. Your program should first prompt the user to enter the input size—i.e., the number of values in the series. Assume the maximum number of values is 80.