#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void printMatrix(int n);
void randomBinary();

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
            randomBinary();
        }
        cout << endl;
    }
}

void randomBinary(){
    //random numの出力もfunctionにしてみたけれど、逆にややこしいかな
    cout << " " << rand()%2 << " ";
}

