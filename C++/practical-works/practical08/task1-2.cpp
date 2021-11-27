/* another approach to replace the designated letter with `blank` */

#include <iostream>
using namespace std;

void Remove(char*, char);

int main()
{
  char str[20] = "Happy Holidays";
  Remove(str, 'H');
  cout << str;
}

void Remove(char* str, char c)
{
  //char* ptr = new char[20];
  while(*str != '\0')
    {
      if(*str == c)
      {
        *str = ' ';
        str++;
        continue;
      }
      str++;
    }
  
}
