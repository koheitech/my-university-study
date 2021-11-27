#include <iostream>
#include <stdio.h>
using namespace std;
void displayPattern(int n);

//Practical1 task3をfunctionにmodularizeするだけだから余裕だった。

int main(){
    int rows = 7; //fixed as 7 this time
    //    cout << "Enter number of rows: ";
    //    cin >> rows;
    displayPattern(rows);

    return 0;
}

void displayPattern(int n) {
    for (int i = 1; i <= n; i++) { // iteration for each row

        // --- printing the left space for the pyramid ---
        for (int space = 0; space < n - i; space++) cout << "    ";

        /* --- printing the numbers up to 1 ---
         * The numbers are aligned with `printf` method */
        for (int j = 0; j < i; j++) printf("%3d ", i - j); // until 1

        //break line
        cout << endl;
    }
}