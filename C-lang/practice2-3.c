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

void FindSmallest(int arr[LENGTH][LENGTH]){
  int smallest, i, j;

  for(j=0; j<LENGTH; j++){
    for(i=0; i<LENGTH; i++){
      if(arr[i][j]>arr[i+1][j]){
        smallest = arr[i+1][j];
      }else{smallest = arr[i][j];}
    }
    printf("Smallest Value in colmun %d is \n");
  }
}

int main (){
  int arr[LENGTH][LENGTH]; //N*N square matrix
  RandomMatrix(arr);
  BubbleSort(arr);
  result(arr);
  return 0;
}
