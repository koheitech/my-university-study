// ---------- Function ----------
#include<iostream>
using namespace std;

void line();//printing 100 lines of 80 dashes

int main() {
    int j;

    for(j=1; j<=100; j++) {
        line();
        cout << endl;
    }
    
    return 0;
}

void line()
{
    int i;
    for(i=1; i<=80; i++) cout << '-' ;
}

// ---------- Function with default value ----------
#include <iostream>
using namespace std;
int MyFunc(int x=1, int y=2, int z=3)
{
    return x+y+z;
    
}

int main()
/* If not enough parameters, rightmost go to their defaults
 * Thus, in this example, 
 * `y` and `z` would be default
 */

{
    int a=1;
    cout << MyFunc(a) << endl;

}

// ---------- Function with one default value ----------
#include <iostream>
using namespace std;

void indent(char letter, int size = 0)
{
    for(short i=0; i<size; i++)
        cout << " ";

    cout << letter << endl;
}

int main()
{
    char letter = 'a';
    indent(letter, 5); //5-space indent
    indent(letter); //not specified, thus, 0-indent by default
}



// ---------- Function with return value ----------

#include <iostream>
using namespace std;

int max(int, int); //function with return value

int main() {
    int firstnum, secnum;
    cout <<"Enter a number: ";
    cin >> firstnum;
    cout <<"Please enter a second number: "; cin >> secnum;

    if (max(firstnum, secnum)>90) cout<<"Award Distinction. "<<endl;
    else
        cout<<"No distinction. "<<endl;
    return 0;
}

int max(int x, int y)
{
    int maxnum;
    if (x > y) maxnum = x;
    else maxnum = y;
    return maxnum;
}

// ---------- Function (pass by reference) ----------
#include <iostream>
using namespace std;

void fun(int& x) { x = 42; }

int main() {
    int v ;
    v=0;
    fun(v); // fun assigns the value 42 to v cout << v;
    cout << v;
    return 0;
}

// ---------- Function (swap with passing reference) ----------
#include <iostream>
using namespace std;

void swap(int&, int&);

int main() {
    int x=89, y=45;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}

void swap(int& a, int& b)
{
    int temp=a;
    a=b;
    b=temp;
}