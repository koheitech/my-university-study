#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream fs;
  char c;
  char* ptr;
  int i, counter = 0;

  //read "SortedString.txt" file
  fs.open("SortedString.txt", ios::in);
  if(fs.fail())
  {
    cout << "File does not exist" << endl;
    cout << "Exit the program" << endl;
  }
  else
  {
    //count the number of characters in "SortedString.txt"
    c = fs.get();
    while(c != EOF)
    {
      counter++;
      c = fs.get();
    }
    
    //cout << "Number of characters in 'SortedString.txt': " << counter << endl;
    
    fs.close();
    fs.open("SortedString.txt", ios::in);
    
    ptr = new char[counter];
    
    //assigining each character into ptr
    for(i=0; i<counter; i++)
    {
      c = fs.get();
      *(ptr + i) = c;
    }
    
    //comparing characters in ptr
    for(i=0; i<counter-1; i++)
    {
      if (*(ptr + i) > *(ptr + (i+1)))
      {
        cout << *(ptr + i) << " and " << *(ptr + (i+1));
        cout << " are out of order." << endl;
        delete[] ptr;
        fs.close();
        return 0;
      }
      
    }
    cout << "Strings in 'SortedString.txt' is sorted in ascending order." << endl;
    delete[] ptr;
    fs.close();
  }
  return 0;
}
