#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE]);

int main () {
  int i, j;
  double arr[SIZE][SIZE];

  // read user input
  cout << "Enter 4-by-4 matrix row by row: " << endl;
  for(i=0; i<SIZE; i++){
      for(j=0; j<SIZE; j++) cin >> arr[i][j];
  }

  // display 4-by-4 matrix
  cout << "your 4-by-4 matrix;" << endl;
  for(i=0; i<SIZE; i++){
      for(j=0; j<SIZE; j++) cout << setw(4) << arr[i][j];
      cout << endl;
  }

  cout << "Sum of elements in the major diagonal: " << sumMajorDiagonal(arr) << endl;

  return 0;
}

double sumMajorDiagonal(const double m[][SIZE]){
  /* ----- find the sum for main diagonal ----- */
    double sum = 0;
    for(int i=0; i<SIZE; i++) sum += m[i][i];
    return sum;
}