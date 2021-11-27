#include <iostream>
#include <cstring>
using namespace std;
int findSubstring(char[], char[]);

int main(){
    const int SIZE = 50;
    int index;
    char substring2Bfound[SIZE], string2Bsearched[SIZE];

    // first string (sub string)
    cout << "Enter the first string: ";
    cin.getline(string2Bsearched, SIZE);
    //cin.ignore();

    // second string (main string)
    cout << "Enter the second string: ";
    cin.getline(substring2Bfound, SIZE);

    index = findSubstring(substring2Bfound, string2Bsearched);
    if(index!=-1) cout << "Substring found at index: " << index << endl;
    else cout << "No substring" << endl;
}

int findSubstring(char string2Bseached[], char substring2Bfound[]){

    int i, j, index=-1;
    numLoop = strlen(string2Bseached)-strlen(substring2Bfound) + 1;
    // letting the size of main string to be 'n', and substring to be 'm',
    // # of required iteration is #OfIter = n - m + 1

    for(i=0; i<numLoop; i++){
        for(j=0; j<strlen(substring2Bfound); j++){
            if(string2Bseached[i+j]!=substring2Bfound[j]){
                index=-1;
                break;
            }
            index = i; //updating index if substring is found
        }
        if(index!=-1) return index; //if substring is found, return the index
    }
    return index; //-1 is returned if substing is not found
}
