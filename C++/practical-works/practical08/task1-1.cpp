#include <iostream>
using namespace std;

void remove(char*, char);

int main()
{
  char str[20] = "Happy Holidays";
  remove(str, 'H');

}

void remove(char* str, char c)
{

    while(*str != '\0')
    {
      if(*str == c)
      {
        str++;
        continue;
      }
      
      cout << *str;
      str++;
    }
}
