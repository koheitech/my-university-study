/* task3
Write a function that finds the smallest element in an array of double values 
using the following header:
double min(double array[], int size)
Write a test program that prompts the user to enter 10 numbers, 
invokes this function, and displays the minimum value.
*/
#include <iostream>
using namespace std;
double findMin(double [], int);

int main(){
    const int size = 10;
    double arr[size], smallest;

    cout << "enter 10 real numbers: " << endl;
    for(int i = 0; i<size; i++) cin >> arr[i];
    smallest = findMin(arr, size);
    cout << "The smallest number is: " << smallest << endl;
}

double findMin(double arr[], int size){
    double smallest = arr[0];
    for(int i = 1; i<size; i++) 
        if(arr[i] < smallest) 
            smallest = arr[i];
    return smallest;
}