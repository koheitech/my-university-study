#include <iostream>
#include <cmath>
#include <cstring>
#include <stdlib.h>
using namespace std;

int BinaryToDecimal(char[], int);

int main(){
    const int SIZE = 50;
    int i, decimal;
    char str_binary[SIZE];

    cout << "Enter a binary string: ";
    cin >> str_binary;
    cout << "Your binary: " << str_binary << endl;

    // find the size of character by incrementing i
    for(i=0; str_binary[i]!='\0'; i++);
    //cout << i << endl; //for test

    decimal = BinaryToDecimal(str_binary, i);
    cout << "decimal: " << decimal << endl;

}

int BinaryToDecimal(char s[], int size){
    /* ----- logic ----- 
     * in order to convet binary to decimal,
     * the given binary is examined one by one, and powered
    */
    int i, dec=0;
    for(i=0; i<size; i++) 
        if(s[i]=='1') dec += pow(2, size-1-i);
    return dec;
}