/* task1
Write a program that reads grades based on the following scheme:
Grade is A if score is >= best - 10 
Grade is B if score is >= best - 20 
Grade is C if score is >= best - 30 
Grade is D if score is >= best - 40 
Grade is F otherwise
The program prompts the user to enter the total number of students, 
then prompts the user toenter all of the scores, 
and concludes by displaying the grades.
*/

#include <iostream>
using namespace std;
int findMax(int [], int);
void grading(int [], int, int);

int main(){
    int studentNum, bestScore;

    cout << "Enter the number of students: ";
    cin >> studentNum;
    int arr[studentNum];

    cout << "Enter the score for each student;" << endl;
    for(int i=0; i<studentNum; i++){
        cout << "Student " << i+1 << ": ";
        cin >> arr[i];
    }

    bestScore = findMax(arr, studentNum);

    grading(arr, studentNum, bestScore);
}

int findMax(int arr[], int size){
    /*find best score amongst students*/
    int i, max = arr[0];
    for(i=1;i<size;i++) 
        if(max<arr[i]) max = arr[i];
    return max;
}

void grading(int arr[], int size, int bestScore){
    for(int i=0; i<size; i++){
        if(arr[i] >= bestScore-10)
            cout << "Student " << i+1 << "'s score: " << arr[i] << ", grade is A." << endl;
        else if(arr[i] >= bestScore-20)
            cout << "Student " << i+1 << "'s score: " << arr[i] << ", grade is B." << endl;
        else if(arr[i] >= bestScore-30)
            cout << "Student " << i+1 << "'s score: " << arr[i] << ", grade is C." << endl;
        else if(arr[i] >= bestScore-40)
            cout << "Student " << i+1 << "'s score: " << arr[i] << ", grade is D." << endl;
        else cout << "Student " << i+1 << "'s score: " << arr[i] << ", grade is F." << endl;
    }
}