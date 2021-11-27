/* ------------------------------------------------
* read abd display a 2D array of char
*/
#include <iostream>
using namespace std;

int main(){
    const int row = 3, column =5;
    char arr2D[row][column];

    cout << "Enter " << row*column << " characters, "
    << column << " per row: " << endl;

    for(int i=0; i<row; i++){
        cout << "Row No." << i << ": " << endl;
        for(int j=0; j<column; j++) cin >> arr2D[i][j];
    }

    cout << "Table is: " << endl;
    for (int i=0;i<row; i++){
        for(int j=0; j<column; j++) cout << arr2D[i][j] << " ";
        cout << endl;
    }
}

/* ------------------------------------------------
* write a program that will print the sum per row in 2D-square array on int
*/

// ----- use global variable -----
// in c++ it is not allowed to pass 2D array as an argument
// it is technically possible to pass using `double pointer`,
// but it is just cumbersome.
// so, it's much easier to use global constant.

#include <iostream>
using namespace std;
const int row=3, col=3;
void readAndDisplay(int [row][col]);

int main()
{
    int sum[col], temp;
    int arr2D[row][col];
    readAndDisplay(arr2D);

    for(int i=0; i<row; i++)
    {
        sum[i] = 0;
        for(int j=0; j<col; j++)
            sum[i]+=arr2D[i][j];
    }

    cout << "Sum for each row: " << endl;
    for(int i=0; i<row; i++)
        cout << sum[i] << endl;

}

void readAndDisplay(int arr[row][col]){
    cout << "Enter " << row*col << " characters, "
         << col << " per row: " << endl;

    for(int i=0; i<row; i++)
    {
        cout << "Row No." << i+1 << ": " << endl;
        for(int j=0; j<col; j++)
            cin >> arr[i][j];
    }

    cout << "Table is: " << endl;
    for (int i=0;i<row; i++)
    {
        for(int j=0; j<col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}


/* ------------------------------------------------
* write a program that will read a 2D array of 5 answers,
  then, comapare with given answer {'T', 'T', 'F', 'F', 'T'},
  and give a 5points for one correct answer
*/
#include <iostream>
using namespace std;
void getScore(char [][5]);
int main()
{
    int temp, row, col=5;
    char answer[] = {'T', 'T', 'F', 'F', 'T'};
    
    cout << "How many students?: ";
    cin >> row;
    char arr[row][col];
    
    //read
    for(int i=0; i<row; i++){
        cout << "Student No." << i+1 << ": " << endl;
        for(int j=0; j<col; j++)
            cin >> arr[i][j];
    }
    
    //display
    for(int i=0;i<row; i++){
        cout << "Student No." << i+1 << ": ";
        for(int j=0; j<col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    
    cout << " ----- Grading ----- " << endl;

    for(int i=0; i<row; i++)
    {
        temp = 0;
        for(int j=0; j<col; j++)
        {
            if (arr[i][j] == answer[j])
                temp++;
        }
        cout << "Student No." << i+1 << ", Grade: " << temp*5 << endl;
    }
}
/* ------------------------------------------------
Display 2D array */

#include <iostream>
#include <iomanip>
using namespace std;

const int ROW=3, COL=4;
void display(int [ROW][COL]);

int main(){
    int arr[ROW][COL] = {8, 16, 9, 52,
                         3, 15, 27, 6,
                         14, 25, 2, 10};

    display(arr);
}

void display(int arr[ROW][COL]){
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++) cout << setw(4) << arr[i][j];
        cout << endl;
    }
}