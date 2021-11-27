#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 5
//number of element: N

/**
 * Task: Create 5 x 5 array filled with random number between -16 and 27,
 * then define the smallest value in each column.
 */

void RandomMatrix(int arr[LENGTH][LENGTH]){
  int i, j;
  srand(time(NULL));
  printf("Random 5x5 matrix is:\n");
  for(i=0; i<LENGTH; i++){
    for(j=0; j<LENGTH; j++){
      arr[i][j] = rand()%44-16;
      printf("%5d", arr[i][j]);
    }printf("\n");
  }
}

void BubbleSort(int arr[LENGTH][LENGTH]){
  int i, j, k, swap;
  for(j=0; j<LENGTH; j++){
    for(k=0; k<LENGTH-1; k++){
      for (i=0; i<LENGTH-k-1; i++){
        if(arr[i][j]>arr[i+1][j]){
        swap = arr[i][j];
        arr[i][j] = arr[i+1][j];
        arr[i+1][j] = swap;
        }
      }
    }
  }
}

void result(int arr[LENGTH][LENGTH]){
  int i, j;
  printf("\nSorted by decreasing order by column:\n");
  for(i=0; i<LENGTH; i++){
    for(j=0; j<LENGTH; j++){
      printf("%5d", arr[i][j]);
    }printf("\n");
  }
  printf("\nThe smallest value in 1st column is %d\n", arr[0][0]);
  printf("The smallest value in 2nd column is %d\n", arr[0][1]);
  printf("The smallest value in 3rd column is %d\n", arr[0][2]);
  printf("The smallest value in 4th column is %d\n", arr[0][3]);
  printf("The smallest value in 5th column is %d\n", arr[0][4]);
}

int main (){
  int arr[LENGTH][LENGTH]; //N*N square matrix
  RandomMatrix(arr);
  BubbleSort(arr);
  result(arr);
  return 0;
}
