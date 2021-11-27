#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){ // iteration for each row

        // --- printing the left space for the pyramid ---
        for(int space = 0; space < rows-i; space++) cout << "    ";

        /* --- printing the numbers up to 1 ---
         * The numbers are aligned with `printf` method */
        for(int j =0; j < i; j++) printf ("%3d ", i-j); // until 1

        // --- printing the right part of the pyramid after 1
        for(int k=0; k < i-1; k++) printf ("%3d ", k+2);
        //for(int k=2; k <= i; k++) printf ("%3d ", k);
        
        //break line
        cout << endl;
    }
    return 0;
}


/* refactor*/
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){ // iteration for each row

        // --- printing the left space for the pyramid ---
        for(int leftSpace = 0; leftSpace < rows-i; leftSpace++) cout << setw(4) << "";

        /* --- printing the numbers up to 1 ---
         * The numbers are aligned with `printf` method */
        for(int j = 0; j < i; j++) cout << setw(4) << (i-j); // until 1

        // --- printing the right part of the pyramid after 1
        for(int k=0; k < i-1; k++) cout << setw(4) << (k+2);
        //for(int k=2; k <= i; k++) printf ("%3d ", k);
        
        //break line
        cout << endl;
    }
    return 0;
}
