#include <iostream>
using namespace std;
bool isConsecutiveFour(const int [], int);

int main(){
    int size, i;

    // validation for input
    // max is 80 and minimum is 4 (consecutive 4 does make no sense if size is 3)
    // cannot exit input-loop unless input is valid
    do{
        cout << "What is the size of list?(max is 80): ";
        cin >> size;
    }while(size <= 3 || size >80);

    int arr[size];
    cout << "Enter " << size << " integers: " << endl;
    for(int i=0; i<size; i++) cin >> arr[i]; //read numbers

    /* display inputted numbers (for testing)
    cout << "array: ";
    for(i=0; i<size; i++) cout << arr[i];
    */

    if(isConsecutiveFour(arr, size)) cout << "\nThis list has consecutive 4." << endl;
    else cout << "\nThis list has NO consecutive 4." << endl;

}

bool isConsecutiveFour(const int arr[], int size){
    /* --- LOGIC ----
     * first, create temporally array with size 4 `temp[4]`
     * Then, using for-loop, insert 4-consecutive elements into temp
     * temp[] is used to check consecutive-4
     * Then, using nested-for-loop, it slides the array one by one rightwards
     * */
    int temp[4];
    for(int i=0; i<size-3; i++){ //size-3 since it checks 4-consecutive elements
        for(int j=0; j<4; j++) temp[j] = arr[i+j]; //insert element to temp[]
        if(temp[0]==temp[1] && temp[1]==temp[2] && temp[2]==temp[3]) 
            return true;
    }
    return false;
}