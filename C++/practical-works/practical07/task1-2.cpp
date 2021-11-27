/*
I used `isdigit` function instead
*/
#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream fs;
  char c;
  int counter = 0;

  //read ExerciseB.txt" file
  fs.open("ExerciseB.txt", ios::in);
  if(fs.fail())
    {
      cout << "File does not exist" << endl;
      cout << "Exit the program" << endl;
    }
    else
    {
      c = fs.get(); //read by one char
      while(c != EOF)
      {
        if(isdigit(c)) //built-in function to check alphabet
          counter++;
        c = fs.get();
      }
      cout << "The file contains " << counter;
      cout << ((counter > 1) ? "digits" : "digit") << endl;
      fs.close();
    }
  
  return 0;
}
