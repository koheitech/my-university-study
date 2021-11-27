/* ----- Towers of Hanoi ----- */
# include <iostream>
using namespace std;

void towers(int, char, char, char);

int main()
{
  int num;
  
  cout << "Enter the number of disk: ";
  cin >> num;
  cout << "The sequence of moves involved in the Tower of Hanoi are: n";
  towers(num, 'A', 'C', 'B');
  return 0;
}

void towers(int num, char frompeg, char topeg, char auxpeg)
{
  if(num == 1)
  {
    cout << "n Move disk 1 from peg " << frompeg << " to peg " << topeg;
    return;
  }
  towers(num-1, frompeg, auxpeg, topeg);
  cout << "n Move disk 1 from peg " << frompeg << " to peg " << topeg;
  towers(num-1, auxpeg, topeg, frompeg);
}

/* ----- recursive function ----- */
/*
f(x) = 0, if x=0
       2f(x-1) + x^2, if x>0
*/

int fun(int x)
{
  if(x==0)
    return 0;
  else 
    return 2*fun(x-1) + x*x;
}

/* ----- Handshake problem ----- */
# include <iostream>
using namespace std;

int hand(int n)
{
  if(n==1)
    return 0;
  else
    return hand(n-1) + (n-1);
}

int main()
{
  int num = 5;
  cout << hand(num) << " handshakes between " << num << " people" << endl;
  return 0;
}

/* ----- Sum ----- */
# include <iostream>
using namespace std;

int sum(int n)
{
  if(n==0)
    return 0;
  else
    return sum(n-1) + n;
}

int main()
{
  cout << sum(5) << endl;
  return 0;
}

/* ----- factorial ----- */
# include <iostream>
using namespace std;

int factorial(int n)
{
  if(n==0)
    return 1;
  else
    return n*factorial(n-1);
}

int main()
{
  for(int i=0; i<=5; i++)
    cout << i << "! = " << factorial(i) << endl;
}

/* ----- Drawing triangle ----- */
# include <iostream>
using namespace std;

void Triangle(int);
void line(int, char);

int main()
{
  int x;
  cout << "Please enter the height of the tirangle: ";
  cin >> x;
  
  while(x<=0)
  {
    cout << "Please enter the height of the tirangle: ";
    cin >> x;
  }
  
  Triangle(x);
}

void Triangle(int n)
{
  //draw a right-angled triangle
  if(n!=0)
  {
    line(n, '*');
    cout << endl;
    Triangle(n-1);
  }
}

void line(int x, char ch)
{
  for(int i=0; i<x; i++)
    cout << ch;
}

/* recursive function can be re-written as a while loop 
void Triangle(int n)
{
  while(n!=0)
  {
    line(n, '*');
    cout << endl;
    n--;
  }
}
*/


/* ----- Fibonacci series ----- */
# include <iostream>
using namespace std;

long fibonacci (long);

int main()
{
  int x;
  cout << "How many fibonacci series?: ";
  cin >> x;
  
  for(int i=1; i<=x; i++)
    cout << fibonacci(i) << " ";
  
  cout << endl;
  return 0;
}

long fibonacci (long n)
{
  if(n ==0 || n == 1)
    return n;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}


/* ----- Towers of Hanoi ----- */
# include <iostream>
using namespace std;

void Rev()
{
  int i;
  cin >> i;
  if (i!=-1)
  {
    Rev();
    cout << i << endl;
  }
}

int main()
{
  cout << "----- Reversing numbers -----" << endl;
  cout << "Enter number (-1 to terminate): " << endl;;
  Rev();
  return 0;
}

/* ----- Palindrome example ----- 
一応動いたけれど、効率的ではない気がするなあ、、
*/

# include <iostream>
using namespace std;
bool Palindrome(char[], int, int);

int main()
{
  char arr[] = "tonanot";
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  //cout << "size: " << sizeOfArray << endl;
  bool palindrome = Palindrome(arr, 0, sizeOfArray-2);
  cout << "The given sentence is " << (palindrome ? "Palindrome" : "NOT Palindrome") << endl;
  return 0;
}

bool Palindrome(char arr[], int start, int end)
{
  if((end+1)-start != 1 && (end+1)-start != 0)
    if(arr[start] != arr[end])
      return false;
    Palindrome(arr, start+1, end-1);
  return (arr[start] == arr[end]) ? true:false;
}

//bool Palindrome(char arr[], int start, int end)
//{
//  while(arr[start] == arr[end])
//  {
//    if((end+1)-start == 1 || (end+1)-start == 0)
//      return true;
//    start ++;
//    end --;
//  }
//  return false;
//}

//bool Palindrome(char arr[], int start, int end) //not work
//{
//  bool result;
//  if((end+1)-start != 1 && (end+1)-start != 0)
//    Palindrome(arr, start+1, end-1);
//  result = (arr[start] == arr[end]) ? true:false;
//  return result;
//}
