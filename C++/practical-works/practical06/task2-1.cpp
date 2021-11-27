#include <iostream>
#include <cstring>
using namespace std;

/* TODO
- 約文をする関数
- denominator 0 のValidation
- Structの使い方をもっと詳しく
=====> go to task2_2
*/

struct Fraction {
  int numerator;
  int denominator;
};

Fraction add(Fraction f1, Fraction f2){
    Fraction addition = {(f1.numerator * f2.denominator) + (f2.numerator * f1.denominator),
                            f1.denominator * f2.denominator};
    return addition;
}


int main() {
    
    int nume1, deno1, nume2, deno2;
    cout << "Enter fraction1: numerator and denominator: " << endl;
    cin >> nume1 >> deno1;
    cout << "Enter fraction2: numerator and denominator: " << endl;
    cin >> nume2 >> deno2;

    Fraction f1 = {nume1, deno1};
    Fraction f2 = {nume2, deno2};
    
    Fraction addition = add(f1, f2);
    cout << "Sum: " << addition.numerator << "/" << addition.denominator << endl;

    return 0;
}


