# Practical4 - 2D array -

## Task1
Write a function that returns the sum of all the elements in a specified column in a matrix using the following header:
```
const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex);
```
Write a test program that reads a 3-by-4 matrix and displays the sum of each column.

## Task2
Write a function that sums all the double values in the major diagonal in an n * n matrix of double values using the following header:
```
const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE]);
```
Write a test program that reads a 4-by-4 matrix and displays the sum of all its elements on the major diagonal.

## Task3
Given a set of points, the closest-pair problem is to find the two points that are nearest to each other. In the figure below, for example, points (1, 1) and (2, 0.5) are closest to each other. There are several ways to solve this problem. An intuitive approach is to compute the distances between all pairs of points and find the pair with the minimum distance. Write a program that finds the nearest points from a set of 8 points given by the users.

## Task4
Write a program that calculates the sum of elements of a two dimensional array. For that, you have to define a function 
`int sum(const int a[][COLUMN_SIZE], int rowSize)`. 
Consider that the number of columns is 4 and the number of rows is 3

## Task5
Write a program that randomly fills in 0s and 1s into a 4-by-4 square matrix, prints the matrix, and finds the rows, columns, and diagonals with all 0s or 1s.