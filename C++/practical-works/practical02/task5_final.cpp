#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void printMatrix(int n);

int main() {
    int n;
    cout << "n x n?: ";
    cin >> n;
    printMatrix(n);
    return 0;
}

void printMatrix(int n){
    srand(time(0));
    /*initializing random numbers
     * it should be placed outside of the loop*/

    for(int i =0; i<n; i++){
        for(int j = 0; j < n; j++){
            cout << " " << rand()%2 << " ";
            // by setting the modulus of 2, I can get either 1 or 2.
        }
        cout << endl;
    }
}

