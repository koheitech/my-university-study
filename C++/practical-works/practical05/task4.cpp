#include <iostream>
#include <cstring>
using namespace std;
void findCommonPrexix(char[], char[], char[]);

int main(){
    const int SIZE = 50;
    char str1[SIZE], str2[SIZE], commonPrefix[SIZE];

    cout << "Enter the first word: ";
    cin >> str1;
    //cin.ignore();

    cout << "Enter the second string: ";
    cin >> str2;

    findCommonPrexix(str1, str2, commonPrefix);
}


void findCommonPrexix(char s1[], char s2[], char commonPrefix[]){

    for(int i=0; s1[i]!='\0' && s2[i]!='\0'; i++){
      //if one of the string reaches `0`, that is the end of iteration
        if(s1[i] == s2[i]) 
            commonPrefix[i] = s1[i];
        //if common character is found, store to `commonPrefix'
        else{
            commonPrefix[i] = '\0';
            break;
            //otherwise, store null character and exit from the loop
        }
    }

    // dispaly the result
    if(commonPrefix[0] == '\0') cout << "No common Prefix" << endl;
    else cout << "Common prefix: " << commonPrefix;
}