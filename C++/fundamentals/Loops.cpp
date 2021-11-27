// ---------- While ----------
  // decrementing-counter while loop
#include <iostream>
using namespace std;
int main() {
    int counter; char ch;
    cout << "Please enter a character: ";
    cin >> ch;
    counter=2;
    while (counter >= 1) {
        cout << ch;
        counter--; }
    cout << endl;
}

// ---------- While ----------
  //multiplication table program
#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    const int limit = 10; int number, count = 1;
    cout << "Multiplication Table Program"; 
    cout << endl << endl;
    cout << "Please enter an integer number: "; 
    cin >> number;
    
    while (count <= limit) {
        cout<<setw(4)<<count<<setw(4)<<" * "
            <<setw(4)<<number<<setw(4)<<"="<<setw(4)<<count*number<<endl; 
        count++; // increment the counter
    } 
}

// ---------- While ----------
  // counter-controled program
  //get class average score for the test
#include <iostream>
using namespace std;

int main() {
    int total;
    int gradeCounter;
    int grade;
    float average;
    int numS = 3; //number of students
    total = 0;
    gradeCounter = 1;

    while (gradeCounter <= numS) {
        cout << "Enter grade: "; // prompt for input
        cin >> grade; // read grade from user
        total += grade; // add grade to total
        gradeCounter++;
    }
    average = (float)(total)/numS; //type converion
    //average=float(total)/numS;

    cout << "Class average is: " << average << endl;
}

// ---------- While ----------
  // sentinel-controlled program
  //get class average score for the test
#include <iostream>
using namespace std;
int main() {

    int total; // sum of grades
    int gradeCounter; // number of grades entered
    int grade; // grade value
    double average; //NOTE change in type of variable average

    // initialization phase
    total = 0; // initialize total
    gradeCounter = 0;
    cout << "Enter grade, -1 to end: "; //prompt for input
    cin >> grade;

    while ( grade != -1 ) {
        total = total + grade;
        gradeCounter++;
        cout << "Enter grade, -1 to end: ";
        cin >> grade; // read next grade
    } // end while

    if ( gradeCounter != 0 ){
        average = (double)(total) / gradeCounter; //type conversion
        cout<<"The class average is: " <<average<<endl;
    } else
    cout<<"No grades were entered! " <<endl;
}//end main

// ---------- For ----------
#include <iostream>
using namespace std;
//print the sum of EVEN integers from 1 to 100 inclusive
int main() {
    int number, sum = 0; // initialize su
    cout << "EVEN integers from 1 to 100 inclusive" << endl;
    for (number = 2; number <= 100; number += 2) {
        cout << number << endl;
        sum = sum + number; // add number to sum
    } // end function main
    cout << "Sum is " << sum << endl;
}

// ---------- Do while ----------
  // it's useful for validation
#include <iostream>
using namespace std;
int main() {
    int firstNum;
    int secondNum;
    cout << "Enter the first number: ";
    cin >> firstNum;

    do {
        cout << "Enter the second number(not zero): ";
        cin >> secondNum;
    } while (secondNum==0);

    cout <<"resulting division:" << (double)(firstNum)/secondNum;
    cout << endl;
}

// ---------- Nested loop ----------
#include <iostream>
using namespace std;
int main() {
    int counter1 = 1;
    int counter2 = 1;

    while (counter1 <=10) {
        cout << "Counter 1: " <<counter1<<endl;
        counter2 = 1;
        while (counter2 <= 10){
            cout << " Counter 2: "<< counter2<<endl;
            counter2++;
        }
    counter1++;
    }
}