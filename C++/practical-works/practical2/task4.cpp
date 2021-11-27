#include <iostream>
using namespace std;

double calcSeries(double n){return 1/(n*(n+2));}

int main() {
    double sum = 0;
    cout << "n:: f(n)" << endl;

    for(int i = 1; i<=14; i++){ //# of iterations is fixed as 14 times
        sum += calcSeries(i); //add to `sum`
        if(i%2 == 0) cout << i << ":: " << sum << endl;
        //ptint out the result only when n is even integers
    }

    return 0;
}

