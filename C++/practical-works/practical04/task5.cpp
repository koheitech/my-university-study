#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int N = 4;
void findAllZeroOne(int [][N]);

int main(){
    int i, j;
    int arr[N][N];
    srand(time(NULL));

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            arr[i][j] = rand()%2; // to get either 1 or 0
            cout << setw(2) << arr[i][j]; //display 4-by-4 matrix
        }cout << endl;
    }

    findAllZeroOne(arr);

    return 0;
}

void findAllZeroOne(int arr[][N]){

    /*only when elements in every row/column have no same numbers, boolean keep false*/
    bool row = false, col = false;

    /* ----- all 1s or 0s on major diagonal ----- */
    if(arr[0][0]==1 && arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[2][2]==arr[3][3])
        cout << "all 1s on major diagonal" << endl;
    else if(arr[0][0]==0 && arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[2][2]==arr[3][3])
        cout << "all 0s on major diagonal" << endl;
    else cout << "N0 same numbers on major diagonal" << endl;

    /* ----- all 1s or 0s on sub-diagonal ----- */
    if(arr[0][3]==1 && arr[0][3]==arr[1][2] && arr[1][2]==arr[2][1] && arr[2][1]==arr[3][0])
        cout << "all 1s on sub-diagonal" << endl;
    else if(arr[0][3]==0 && arr[0][3]==arr[1][2] && arr[1][2]==arr[2][1] && arr[2][1]==arr[3][0])
        cout << "all 0s on sub-diagonal" << endl;
    else cout << "N0 same numbers on sub-diagonal" << endl;
    
    for(int i = 0; i<N; i++){
        /* ----- all 1s or 0s on rows ----- */
        if(arr[i][0]==1 && arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2] && arr[i][2] == arr[i][3]){
            cout << "all 1s on row" << i << endl;
            row = true;
        }
        if(arr[i][0]==0 && arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2] && arr[i][2] == arr[i][3]){
            cout << "all 0s on row" << i << endl;
            row = true;
        }

        /* ----- all 1s or 0s on columns ----- */
        if(arr[0][i]==1 && arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i] && arr[2][i] == arr[3][i]){
            cout << "all 1s on column" << i << endl;
            col = true;
        }
        if(arr[0][i]==0 && arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i] && arr[2][i] == arr[3][i]){
            cout << "all 0s on column" << i << endl;
            col = true;
        }
    }

    if(!row) cout << "No same numbers on rows" << endl;
    if(!col) cout << "No same numbers on columns" << endl;
}