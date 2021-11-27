/* task2
Write a program that reads at most 100 integers between 1 and 100
and counts the occurrence of each number. Assume the input ends with 0.
*/

#include <iostream>
using namespace std;

int main(){
    int counts[100]; //use array as counter for inputs ranging from 1 to 100
    int number; // number read from a file

    // Initialize all counter to 0
    // otherwise, non-assigned element might have some random numbers
    for (int i = 0; i < 100; i++) counts[i] = 0;

    cout << "Enter the numbers between 1 and 100, and 0 to terminate: " << endl;

    do{
        cin >> number;

        //validation for entering invalid number for the first time
        if(number<0 || number>100){
            cout << "READ the instruction!!" << endl;
            continue;
        }
        
        // increment counter
        counts[number - 1]++;

    }while(number != 0);

    for (int i = 0; i < 100; i++) {
        if (counts[i] > 0)
            cout << (i + 1) << " occurs " << counts[i]
                 << ((counts[i] == 1) ? " time" : " times") << endl;
    }

    return 0;
}