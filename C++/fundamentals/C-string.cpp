/* ------------------------------------------------
* input a word and output it with and without white space
*/
#include <iostream>
using namespace std;

int main()
{
    char str[20];
    int i;

    cout << "Enter a word: ";
    cin >> str;

    //without space
    cout << str << endl;

    //with space
    for(i=0; str[i]!=0; i++)
        cout << str[i] << " ";

}

/* ------------------------------------------------
* write a program to output a word in reverse
*/


#include <iostream>
using namespace std;

int main()
{
    int i;
    char str[20];
    cout << "Enter a word: ";
    cin >> str;

    for(i=0; str[i]!='\0'; i++); // increment i until the end of '\0'
  
    //printing backwords
    for(i--; i>=0; i--)
        cout << str[i];
    cout << endl;
    // why i-- is used? cuz `for(i=0; i!='\0'; i++);` this for loop returns
    // i = the number of characters + 1 (the \0)
    return 0;
}


/* ------------------------------------------------
* write a program that count # of occurrence of letter 'h'
*/

#include <iostream>
using namespace std;

int main()
{
    char str[20];
    int i, count = 0;

    cout << "Enter a word: ";
    cin >> str;

    for(i=0; str[i]!='\0'; i++)
        if(str[i] == 'h')
            count++;

    if(count == 0)
        cout << "The letter 'h' did not occur." << endl;
    else if(count == 1)
        cout << "The letter 'h' occur 1 time." << endl;
    else
        cout << "The letter 'h' occur " << count << " times." << endl;
}


/* ------------------------------------------------
 * example of cin.getline() built-in function
 */

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 50;
    char str[SIZE];

    cout << "Enter a string(Enter to finish input): ";
    cin.getline(str, SIZE, '\n');

    /* ----- cin.getline() -----
     * when using cin only, it terminates reading user input
     * in case of '\n' or whitespace.
     * This built-in function lets us to designate the terminating keyword
     */

    cout << "The input string: " << str << endl;

    cin.ignore();
    /* ----- cin.ignore() -----
     * especially when using cin and cin.getline() are used together,
     * problems occur due to reading stream or buffer
     * This built-in function lets us to clear up the buffer.
     */

    return 0;
}


/* ------------------------------------------------
 * example of cin.getline() and cin.ignore() combination
 */

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 50;
    int var;
    char str[SIZE];

    cout << "Enter an integer: ";
    cin >> var;
    cout << "Input integer: " << var << endl;

    cin.ignore(); // <===== HERE!!
    // otherwise, the breakline symbol `\n` stays in the buffer,
    // which affects the next input operation

    cout << "Enter a string(Enter to finish input): ";
    cin.getline(str, SIZE, '\n');
    cout << "Input string: " << str << endl;

    return 0;
}

/* ------------------------------------------------
 * example of cstring built-in function
 */
#include <iostream>
#include <cstring>
using namespace std;
    int main(){
    const int MAXELS = 50;
    char string1[MAXELS] = "Hello";
    char string2[MAXELS] =  "Hello there";

    /* ----- strcmp(str1, str2) -----
     * Compares str1 and str2 and returns a negative, zero, or positive value
     * depending on whether str1 is less than, equal to, or greater than str2
     * in alphabeticorder.
     */
    if (strcmp(string1, string2)<0)
        cout << string1 << " is less than " << string2 << endl;
    else if (strcmp(string1, string2)==0)
        cout << string1 << " is equal to " << string2 << endl;
    else
        cout << string1 << " is greater than " << string2 << endl;

    /* ----- strlen(str1) -----
     * Returns the length of the string str1,
     * i.e. the number of characters excluding the null character ‘\0’.
     */
    cout << "The length of string1 is " << strlen(string1)<< endl;
    cout << "The length of string2 is " << strlen(string2)<< endl;

    /* ----- strcat(str1, str2) -----
     * Appends str2 at the end of str1.
     * str1 must be large enough to hold both str1 before appending and str2.
     */
    strcat(string1," World!");
    cout << "\nAfter concatenation, string1 contains "<< string1;
    cout << "\nThe length of this string is "<< strlen(string1)<<endl;

    /* ----- strcpy(str1, str2) -----
     * Copies string str2 to string str1 including ‘\0’.
     * str1 must be large enough to hold str2.
     * The original value to str1 is destroyed.
     */
    strcpy(string1, string2);
    cout << "\nAfter copying string2 to string1, the value in string1 is:" << string1;
    cout << "\nThe length of this string is "<<strlen(string1)<<endl;

    return 0;
}


/* ------------------------------------------------
 * Write a function that takes a string and a character and returns true (i.e. 1)
 * if the character occurs in the string, and false otherwise.
 * Test your function by writing a program
 * that reads a word and a character from the user and checks
 * if the character occurs in the string. Print appropriate messages.
 */

#include <iostream>
using namespace std;

bool find(char string2Bsearched[], char char2Bfound){
    for(int i=0; string2Bsearched[i]!='\0'; i++)
        if (string2Bsearched[i]==char2Bfound)
            return true;
    return false;
}

int main() {

    char str1[20],ch1;
    cout <<"Enter a word: ";
    cin  >> str1;
    cout <<"Please enter a character to look for: ";
    cin  >> ch1;

    if (find(str1,ch1))
        cout<<"The charecter "<< ch1<<" appears."<<endl;
    else
        cout<<"The character does not appear in the word."<<endl;

    return 0;
}

/* ------------------------------------------------
 * Function takes a string and a character and returns true
 * if the character occurs in the string.
 * The function should also keep the first position
 * where it found the character via the use of a reference parameter.
 */

#include <iostream>
using namespace std;

bool find(char s[], char ch, int &i){
    //position passed by reference to store the index of found position
    for(i=0; s[i]!='\0'; i++)
        if(s[i] == ch)
            return true;
    return false;
}

int main() {
    char str[20], ch1;
    int position;

    cout<<"Enter a str:";
    cin>>str;
    cout<<"Enter a character:";
    cin>>ch1;

    if (find(str,ch1, position))
        cout<<"It was found at position "<<position<<endl;
    else
        cout<<"Not found! "<<endl;

    return 0;
}
