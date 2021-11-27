//要件定義を間違えた。UserからArrayのSizeを受け取らなくては行けなかったのに、
//間違えて、0のinputで終了するように設計してしまった。
//でもこれもせっかくなので残しておくことにした。

#include <iostream>
using namespace std;
bool strictlyEqual(const int [], const int [], int); //why it has const??
void readList(int [], int);

int main(){
    const int size = 20;
    int arr1[size], arr2[size], i;

    //initialize arrays since array has random numbers otherwise
    for(i=0; i<size; i++){
        arr1[i] = 0;
        arr2[i] = 0;
    }

    cout << "Please enter integers for list1(enter 0 to finish):" << endl;
    readList(arr1, size);
    cout << "Please enter integers for list2(enter 0 to finish):" << endl;
    readList(arr2, size);

    /* just for myself to check the elements of two arrays
    cout << "list1: ";
    for(i=0; i<size; i++) cout << arr1[i];
    cout << "\nlist2: ";
    for(i=0; i<size; i++) cout << arr2[i];
    */

    if(strictlyEqual(arr1, arr2, size)) cout << "Two lists are identical." << endl;
    else cout << "Two lists are NOT identical." << endl;
}

void readList(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
        //get numbers from user, but break the for-loop if input is 0
        if(arr[i] == 0) break;
    }
}

bool strictlyEqual(const int arr1[], const int arr2[], int size){
    for(int i=0; i<size; i++) if(arr1[i] != arr2[i]) return false;
    return true;
}