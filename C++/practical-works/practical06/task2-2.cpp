#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

/* TODO
- fucntion for reduction of fraction
- validation for denominator 0
*/

struct Fraction {
  int numerator;
  int denominator;
};

Fraction add(Fraction, Fraction);
Fraction reductionOfFraction(Fraction);


int main() {
    
    int nume1, deno1, nume2, deno2;
    
    do{
    cout << "Enter fraction1: numerator / denominator: " << endl;
    cin >> nume1 >> deno1;
    cout << "Enter fraction2: numerator / denominator: " << endl;
    cin >> nume2 >> deno2;
    
    /* --- validation for denominator 0*/
    if(deno1 ==0 || deno2 == 0)
        cout << "denominator cannot be 0\nPlease enter again: " << endl;
    }while(deno1 == 0 || deno2 == 0);
    
    
    Fraction f1 = {nume1, deno1}; //declare and initialize all at once
    Fraction f2 = {nume2, deno2};
    
    Fraction addition = add(f1, f2);
    cout << "Sum: " << addition.numerator << "/" << addition.denominator << endl;

    return 0;
}


Fraction add(Fraction f1, Fraction f2){
    /* ----- addition of fraction -----
     * using the formula for addition of fraction
     * `a/b + c/d = (ad + bc)/bd`
     * create new object addition for the result of addion of fraction
     */
    Fraction addition =
    {(f1.numerator * f2.denominator) + (f2.numerator * f1.denominator), //numerator
        f1.denominator * f2.denominator}; //denominator
    
    return reductionOfFraction(addition);
}


Fraction reductionOfFraction(Fraction p){
    /* ----- reduction of fraction -----
     * since the formula for addition of fraction returns diviable fractions,
     * this function reduces the fraction
     */
    int i, min;
    min = (p.numerator > p.denominator) ? p.numerator : p.denominator;
    for(i=min; i>=1; --i)
        if(p.numerator%i==0 && p.denominator%i==0){
            p.numerator /= i;
            p.denominator /= i;
        }
    
    return p;
}
