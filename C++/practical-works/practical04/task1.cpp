#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex);

int main () {
    int  i, j, row = 3;
    double arr[row][SIZE];

    // read user input
    cout << "Enter 3-by-4 matrix row by row: " << endl;
    for(i=0; i<row; i++){
        for(j=0; j<SIZE; j++) cin >> arr[i][j];
    }
    
    // display 3-by-4 matrix
    cout << "your 3-by-4 matrix;" << endl;
    for(i=0; i<row; i++){
        for(j=0; j<SIZE; j++) cout << setw(4) << arr[i][j];
        cout << endl;
    }

    for(i=0; i<SIZE; i++) 
        cout << "sum for col " << i << ": " << sumColumn(arr, row, i) << endl;
    
    return 0;
}

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex){
    double sumCol=0;
    for(int i=0; i<rowSize; i++) 
        sumCol += m[i][columnIndex];
    //fixing the column index, and loop vertically to sum up each column
    return sumCol;
}

/* ------------------------------------------------------------ 
 * ----- Different version ----- 
 * using void function, looping output as well*/


#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 4;
//double sumColumn(const double m[][SIZE], int rowSize, int columnIndex);
void sumColumn(const double m[][SIZE], int);

int main () {
    int  i, j, row = 3;
    double arr[row][SIZE];

    cout << "Enter 3-by-4 matrix row by row: " << endl;
    for(i=0; i<row; i++){
        for(j=0; j<SIZE; j++) cin >> arr[i][j];
    }

    cout << "your 3-by-4 matrix;" << endl;
    for(i=0; i<row; i++){
        for(j=0; j<SIZE; j++) cout << setw(4) << arr[i][j];
        cout << endl;
    }
    
    sumColumn(arr, row);

    return 0;
}

void sumColumn(const double m[][SIZE], int row){
    /* ---- function to calculate the sum for each column and display result -----
     * by swapping the `nested for`, change the order of loop
     * loop though column, then go to next column */
    double sum;
    int i, j, counter=0;
    for(i=0; i<SIZE; i++){
        sum=0;
        for(j=0; j<row; j++){
            sum += m[j][i];
        }
        counter++;
        cout << "sum for col " << counter << ": " << sum << endl;
    }
}