/* task4
Two arrays list1 and list2 are strictly identical 
if they have the same length and list1[i] is equal to list2[i] for each i. 
Write a function that returns true if list1 and list2 are strictly identical 
using the following header:
bool strictlyEqual(const int list1[], const int list2[], int size)
Write a test program that prompts the user to enter two lists of integers 
and displays whether the two are strictly identical. The sample runs follow. 
Note that the first number in the input indicates the number of the elements in the list. 
This number is not part of the list. Assume the list size is maximum 20.*/
#include <iostream>
using namespace std;
bool strictlyEqual(const int [], const int [], int); //why it has const??

int main(){
    int size;
    
    // validation for input
    // input-loop continues as long as invalid numbers inputted
    do{
        cout << "What is the size of list?(max is 20): ";
        cin >> size;
        if(size<=0 || size >20 )
            cout << "invalid input, do it again" << endl;
    }while(size <= 0 || size >20);

    int arr1[size], arr2[size];

    cout << "Please enter integers for list1:" << endl;
    for(int i=0; i<size; i++)
        cin >> arr1[i];

    cout << "Please enter integers for list2:" << endl;
    for(int i=0; i<size; i++)
        cin >> arr2[i];

    /* just for myself to check the elements of two arrays
    cout << "list1: ";
    for(i=0; i<size; i++) cout << arr1[i];
    cout << "\nlist2: ";
    for(i=0; i<size; i++) cout << arr2[i];
    */

    if(strictlyEqual(arr1, arr2, size))
        cout << endl << "Two lists are identical." << endl;
    else
        cout << endl << "Two lists are NOT identical." << endl;
}

bool strictlyEqual(const int arr1[], const int arr2[], int size){
    for(int i=0; i<size; i++)
        if(arr1[i] != arr2[i])
            return false;
    return true;
}
