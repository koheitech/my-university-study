#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

double footToMeter(double foot){ return 0.305*foot; }
double meterToFoot(double meter){ return meter/0.305;}

int main() {
    //`printf` command for alignment
    printf ("%10s", "Feet");
    printf ("%10s", "Meters");
    printf ("%10s", "|");
    printf ("%10s", "Meters");
    printf ("%20s", "Feet");
    cout << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    for(int i = 1, j=20; i<=10;i++, j+=5) {
        /*`feet to meter` and `meter to feet` has different stepsize of increment
        => i for feet to meter (increased from 1 with stepsize of 1)
        => j for meter to feet (increased from 20 with stepseize of 5)*/

        printf("%10d", i);
        printf("%10f", footToMeter(i));
        printf("%10s", "|");
        printf("%10d", j);
        printf("%20f", meterToFoot(j));
        cout << endl;
    }
    return 0;
}

