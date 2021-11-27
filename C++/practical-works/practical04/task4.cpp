#include <iostream>
#include <iomanip>
using namespace std;
const int COLUMN_SIZE = 4;
int sum(const int a[][COLUMN_SIZE], int rowSize);

int main () {
  int  i, j, row=3;
  int arr[row][COLUMN_SIZE];

  // read user input
  cout << "Enter 3-by-4 matrix row by row: " << endl;
  for(i=0; i<row; i++){
      for(j=0; j<COLUMN_SIZE; j++) cin >> arr[i][j];
  }

  // display 3-by-4 matrix
  cout << "your 3-by-4 matrix;" << endl;
  for(i=0; i<row; i++){
      for(j=0; j<COLUMN_SIZE; j++) cout << setw(4) << arr[i][j];
      cout << endl;
  }

  cout << "Sum of all elements: " << sum(arr, row) << endl;

  return 0;
}

int sum(const int a[][COLUMN_SIZE], int rowSize){
  /* ----- find sum for all the elements in a matrix ----- */
  int i, j, sum = 0;
  for(i=0; i<rowSize; i++){
      for(j=0; j<COLUMN_SIZE; j++) 
        sum += a[i][j];
  }
  return sum;
}