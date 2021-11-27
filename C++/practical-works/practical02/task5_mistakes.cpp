#include <iostream>
#include <cstdlib>
using namespace std;

void printMatrix(int n);
int randomBinary();

int main() {
    int n;
    cout << "n x n?: " << endl;
    cin >> n;
    printMatrix(n);

    return 0;
}

void printMatrix(int n){
    for(int i =0; i<n; i++){
        for(int j = 0; j < n; j++){
            cout << " " << randomBinary() << " ";
            srand (time(NULL));
        }
        cout << endl;
    }
}

int randomBinary(){
    srand (time(NULL));
    int randnum = rand();
    if(randnum < 5){
        return 0;
    }else{return 1;}
}
/*なぜかrand() functionが0-9の範囲のRandom numberを生み出すと思って、（多分違う）
 * それを0-4と5-9で条件分岐しようとした。
 * でもそもそもrand()をLoopのなかに入れていたため、同じ結果が出直されてしまった。*/

//random number should be initialized

//random number should be initialized OUTSIDE loops


