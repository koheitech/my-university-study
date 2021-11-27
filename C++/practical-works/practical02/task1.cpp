#include<iostream>
using namespace std;

int sumDigits(int n);

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Sum of digits: " << sumDigits(n);
    return 0;
}

int sumDigits(int n)
{
    /* Logic:
        * if the first digit is removed, "n" becomes 0.
        * that's when this program exits from the loop, and return the "sum"*/
    int sum = 0;
    while(n > 0){
        sum += n%10; //extracting the last digit and add to "sum"
        n /= 10; //removing the last digit
    }
    return sum;
}


