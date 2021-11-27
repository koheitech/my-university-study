#include <iostream>
using namespace std;

int main(){

    cout << "---------- Syntax ----------\n";
    int Dec[5]; //declaration
    double DecIni[] = {0.5, 0.3, 1, 4}; // declaration and initialization

    cout << "---------- we can treat array as normal variable ----------\n";
    //get input and assign to array
    int arr[5];
    cout << "Enter 5 integers: " << endl;
    for(int i = 0; i<5; i++){
        cin >> arr[i];
    }

    //output all the elements in the array
    cout << "Elements in arr;" << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;

    cout << "---------- Loop Though an array after c++11 ----------\n";
    //way to loop though an array after c++11
    int arr2[] = {0, 1, 2, 3, 4};
    for(const int &arr2 : arr2)
        cout << arr2 << endl;

    cout << "---------- Negative Index ----------\n";
    int negativeIndex[5];
    for (int j = 0, ni = -5; j<5; ni++, j++){
        negativeIndex[j] = ni;
        cout << negativeIndex[j] << endl;
    }

    return 0;
}

