#include <iostream>
using namespace std;

int count(char s[], char a){
    int i, count = 0;
    for(i=0; s[i]!='\0'; i++) 
        if(s[i] == a) 
            count++;
    return count;
}

int main(){
    int counter, size = 50;;
    char str[size], ch;

    cout << "Enter a string('Enter' to terminate): ";
    cin.getline(str, size, '\n');
    //cin.ignore();

    cout << "Enter a character you want to find: ";
    cin >> ch;

    counter = count(str, ch);

    if(counter == 0) cout << ch << "did not occur." << endl;
    else if(counter == 1) cout << ch << "occurred 1 time." << endl;
    else cout << ch << "occurred " << counter << " times." << endl;
}
