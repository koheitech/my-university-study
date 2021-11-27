// ------------------------------------------------
//find the samallest number
#include <iostream>
using namespace std;
int main(){
    int arr[5], smallest;

    cout << "enter 5 integers: " << endl;
    for(int i = 0; i<5; i++) cin >> arr[i];

    smallest = arr[0];
    for(int j = 1; j<5; j++) if(arr[j] < smallest) smallest = arr[j];

    cout << "The smallest number is: " << smallest << endl;
}

// ------------------------------------------------
//initialize array to the even integers from 2 to 20
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int arraySize = 10;
    int arr[arraySize], i;

    for(i=0; i<arraySize;i++) arr[i] = 2+2*i;

    cout << setw(10) << "Element" << setw(10) << "Value" << endl;
    cout << "-------------------------" << endl;

    for(i=0;i<arraySize;i++)
        cout << setw(10) << i << setw(10) << arr[i] << endl;
}


// ------------------------------------------------
//find maximum
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 5;
int findMax(int [MAX]); 
//generally advisable to omit size of array in function header

int main()
{
    int arr[MAX] = {2, 18, 1, 27, 16};
    cout << "The max value: " << findMax(arr) << endl;
}

int findMax(int arr[MAX]){
    int i, max = arr[0];
    for(i=1;i<MAX;i++) 
        if(max<arr[i]) 
            max = arr[i];
    return max;
}



// ------------------------------------------------
//find maximum version 2
// specified array size with another parameter
#include <iostream>
using namespace std;

const int MAX = 10;
int findMax(int [], int);

int main(){
    int arr[MAX] = {2, 18, 1, 27, 16};
    cout << "The max value: " << findMax(arr, MAX) << endl;
}

int findMax(int arr[], int size){
    int i, max = arr[0];
    for(i=1;i<size;i++) if(max<arr[i]) max = arr[i];
    return max;
}


// ------------------------------------------------
// passing array and element into functions
#include <iostream>
using namespace std;

void modifyArray(int [], int);
void modifyElement(int);
void printArray(int [], int);
int main(){

    const int arraySize = 5;
    int arr[arraySize] = {0, 1, 2, 3, 4};
    cout << "original array elements: ";
    printArray(arr, arraySize);

    cout << "Let's multiply each element in the array by 2" << endl;
    modifyArray(arr, arraySize); //pass by reference and modify value of array

    cout << "Then, let's multiply the element at index 3 by 2" << endl;
    modifyElement(arr[3]);

}

void modifyArray(int a[], int size){
    for(int i=0; i<size; i++) a[i] *= 2;
    cout << "modified array elemetns: ";
    printArray(a, size);
}

void modifyElement(int e){
    cout << "one-element modified array at index 3: " << (e *= 2) << endl;
}

void printArray(int a[], int size){
    for(int i=0; i<size; i++) cout << a[i] << " ";
    cout << endl;
}

// ------------------------------------------------
// Linear Search Program
#include <iostream>
using namespace std;

int readArray(int []);
int findElement(int [], int, int);

int main(){
    const int MAX = 1000;
    int s1[MAX], size, key, position;

    size = readArray(s1);

    cout << "enter the number you are looking for: ";
    cin >> key;

    position  = findElement(s1, key, size);

    cout << "Entered numbers: ";
    
    for(int i=0; i < size; i++)
        cout << s1[i] << " ";
    cout << "\nyour key element: " << key << endl;

    if(position == -1)
        cout << "Numbers not found" << endl;
    else
        cout << "Number found in position: " << position << endl;
}

int readArray(int* a){
    /* read an array from user, -1 to terminate input
     * using do-while
     **/
    int i=0;
    cout << "Enter integers (-1 to terminate): " << endl;
    do{
        cin >> a[i];
        i++;
    }while(a[i-1]!=-1);
    //here a[i-1] because index starts from 0, but counter `i` starts from 1
    return i-1; //i is the array size
}

int findElement(int *a, int key, int size){
    /* going though the array passed into and find the key
     * it returns the position of the key element
     * or, it returns -1 is not found
     **/
    for(int i=0; i<size; i++){
        if(a[i] == key)
            return i;
    }
    return -1;
}

// ------------------------------------------------
// Reverse Array
// program that reads 10 integers and display them in reverse
#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    int arr[size], i;

    cout << "read 10 numbers: " << endl;
    for(i=0; i<size; i++){
        cout << "Number " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Reverse Order: ";
    for(i = size-1; i>=0; i--) cout << arr[i] << " ";
}

// ------------------------------------------------
/* 
Write a program that reads unspecifed number of scores and determines 
how many are above, how many are equal and how many are below average.
Enter negative number to terminate
Assuming Max number of score is 100
*/
#include <iostream>
#include <cmath>
using namespace std;

int readScore(int []);
double calcAverage(int [], int);
void counter(int [], int, double);

int main(){
    const int MAX = 1000;
    int arr[MAX],size;
    size = readScore(arr);
    double avg = calcAverage(arr, size);
    counter(arr, size, avg);
}


int readScore(int *arr){
    int temp, i = 0; //counter
    do{
        cout << "Enter scores (max is 100) and negative number to terminate: ";
        cin >> temp;
        if(temp > 100){ 
            // validation for score more than 100
            // in order to receive input temporally, use `temp` as buffer
            cout << "Its beyond range";
            continue;
        }
        arr[i] = temp;
        i++;
    }while(arr[i-1] >= 0);
    return i-1; //return the size of array == number of inputs
}

double calcAverage(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        //sum up all the elements in the array
        sum += arr[i];
    }
    return (double)sum/size;
}

void counter(int *arr, int size, double avg){
    int above=0, equal=0, lower=0; //counter for each condition
    for(int i=0; i<size; i++){
        if(arr[i] > avg) above++;
        if(arr[i] < avg) lower++;
        if(arr[i] == round(avg)) equal++;
        //since average is usually fraction, it cannot be equal to any inputted score
        //thus, I round off the average so that some scores can be equal to average
    }
    cout << "Average score: " << avg << endl;
    cout << "The number of score higher than average: " << above << endl;
    cout << "The number of score lower than average: " << lower << endl;
    cout << "The number of score equal to average: " << equal << endl;
}

// ------------------------------------------------
//the program that reads the unspecified number of scores ranging from 1 to 100,
//and terminate the input if 0 is inputted
//Then, count and display how many times each number is entered

//TODO
//このコードはマイナスのインプットと100以上のインプットを無視している。
//C++のコンパイラー構造上問題なく動くけれど、マイナスのインプットをはじくように再設計してみようかな
//そうなると do while構文を使ったほうがよさそうだ。

#include <iostream>
using namespace std; int main(){
    int counts[100];
    int number; // number read from a file

    // Initialize counts
    for (int i = 0; i < 100; i++) counts[i] = 0;

    cout << "Enter the numbers between 1 and 100 ending with 0: "; // Read all numbers
    cin >> number;

    if(number <= 0 && number > 100){ //validation for entering invalid number for the first time
        cout << "READ the instruction!!";
        return 0;
    }

    while (number != 0){
        counts[number - 1]++;
        //using array as counter for integers ranging from 1 to 100
        cin >> number;
    }

    // Display result
    for (int i = 1; i < 100; i++) {
        if (counts[i] > 0)
            cout << (i + 1) << " occurs " << counts[i]
            << ((counts[i] == 1) ? " time" : " times") << endl;
    }

    return 0;
}