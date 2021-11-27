#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int year;
    int day;
    int counter;
    int hmdem[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //How Many Days in Each Month
    string months[12] = {"January", "February", "March", "April", "May", "June", "July",
                         "August", "September", "October", "November", "December"};

    cout << "Enter the year: ";
    cin >> year;

    cout << "\nEnter the starting day\n";
    cout << "1:Sunday 2:Monday 3:Tuesday 4:Wednesday 5:Thursday 6:Friday 7:Saturday\n";
    cin >> day;

    if(year%4==0 && year%100!=0) hmdem[1]++;
    /* --- validation for the leap year ---
     * The condition for the leap year is "Multiple of 4" and "not multiple of 100"
     * If condition holds, the number of days in February was incremented by one*/

    for(int i=0; i<12; i++){ //iteration 12 times for 12 months

        // calender design part;
        cout << "\n       " << months[i] << "  " << year << endl;
        cout << "Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
        cout << "- - - - - - - - - - - - - - - - - -" << endl;

        counter = 0;

        for(int j=1; j<hmdem[i]+day; j++){ //nested loop for days in a month

            if(j<day){
                /* --- Validation for the 1st week ---
                 * In the 1st week, depending on the first day of the year, space should be printed.
                 * ex) if Friday(6) was inputted, make 5 spaces
                 * Then, in order for the process below, increment counter.*/
                cout << "     ";
                counter++;
                continue;
            }

            /* --- printing the dates ---
             * print all the dates from 1st to the end of each month
             * Since first few days might be ignored by the validation above,
             * i offset them by subtracting the counter
             * with `printf` method, I aligned the calender*/
            printf ("%3d  ", j-counter);

            /* --- line break ---
             * Since each week consists of 7 days,
             * I made a line break with the multiple of 7 */
            if(j%7 == 0) cout << endl;
        }

        /* --- continuation for next month ---
         * After looping though the whole day of month,
         * the value for `day` should be modified in a way that
         * can continue from the previous month.
         * It can be done by finding out the reminder of division by 7.
         * Then, for the case of reminder 0, `day` value was modified to 7.*/
        day = (hmdem[i]+day)%7;
        if(day == 0) day = 7;
        //cout << "'day' value: " << day << endl;
    }
    return 0;
}


/* refactor */
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int year;
    int day;
    int counter;
    int day4eachMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //How Many Days in Each Month
    string months[12] = {"January", "February", "March", "April", "May", "June", "July",
                         "August", "September", "October", "November", "December"};

    cout << "Enter the year: ";
    cin >> year;

    cout << "\nEnter the starting day\n";
    cout << "1:Sunday 2:Monday 3:Tuesday 4:Wednesday 5:Thursday 6:Friday 7:Saturday\n";
    cin >> day;

    if(year%4==0 && year%100!=0) day4eachMonth[1]++;
    /* --- validation for the leap year ---
     * The condition for the leap year is "Multiple of 4" and "not multiple of 100"
     * If condition holds, the number of days in February was incremented by one*/

    for(int i=0; i<12; i++){ //iteration 12 times for 12 months

        // calender design part;
        cout << endl << setw(10) << months[i] << setw(10) << year << endl;
        cout << setw(20) << "Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
        cout << setw(20) << "- - - - - - - - - - - - - - - - - -" << endl;

        counter = 0;

        for(int dayCounter=1; dayCounter<day4eachMonth[i]+day; dayCounter++){ //nested loop for days in a month

            if(dayCounter<day){
                /* --- Validation for the 1st week ---
                 * In the 1st week, depending on the first day of the year, space should be printed.
                 * ex) if Friday(6) was inputted, make 5 spaces
                 * Then, in order for the process below, increment counter.*/
                cout << setw(5) << "";
                counter++;
                continue;
            }

            /* --- printing the dates ---
             * print all the dates from 1st to the end of each month
             * Since first few days might be ignored by the validation above,
             * i offset them by subtracting the counter
             * with `printf` method, I aligned the calender*/
            cout << setw(5) << dayCounter-counter;

            /* --- line break ---
             * Since each week consists of 7 days,
             * I made a line break with the multiple of 7 */
            if(dayCounter%7 == 0) cout << endl;
        }

        /* --- continuation for next month ---
         * After looping though the whole day of month,
         * the value for `day` should be modified in a way that
         * can continue from the previous month.
         * It can be done by finding out the reminder of division by 7.
         * Then, for the case of reminder 0, `day` value was modified to 7.*/
        day = (day4eachMonth[i]+day)%7;
        if(day == 0) day = 7;
        //cout << "'day' value: " << day << endl;
    }
    return 0;
}
