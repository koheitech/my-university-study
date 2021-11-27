#include <iostream>
using namespace std;

void Append(char *s, char ch);

int main()
{
  char str[20] = "Happy Holidays";
  Append(str, 'H');
  
  cout << str << endl;
}

void Append(char *s, char ch)
{
  while(*s != '\0')
    s++;
    
    *s = ch;
    *(s+1) = '\0';
}


