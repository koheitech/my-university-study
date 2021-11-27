#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream fs;
  char c1, c2;

  //read "SortedString.txt" file
  fs.open("SortedString.txt", ios::in);
  if(fs.fail())
    {
      cout << "File does not exist" << endl;
      cout << "Exit the program" << endl;
    }
    else
    {
      c1 = fs.get();
      c2 = fs.get();
      
      while(c1 != EOF && c2 != EOF)
      {
        if(c1 > c2)
        {
          cout << "\"" << c1 << "\" and \"" << c2
               << "\" are out of order." << endl;
          
          fs.close();
          return 0;
        }
        
        c1 = c2;
        c2 = fs.get();
      }
      cout << "Strings in 'SortedString.txt' is "
           << "successfully sorted in ascending order." << endl;
      fs.close();
    }
  
  return 0;
}
