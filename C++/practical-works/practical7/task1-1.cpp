#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream fs;
  char c;
  int counter = 0;

  //read ExerciseA.txt" file
  fs.open("ExerciseA.txt", ios::in);
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
        if(isalpha(c)) //built-in function to check alphabet
          counter++;
        c = fs.get();
      }
      cout << "The file contains " << counter << " alphabetic ";
      cout << ((counter > 1) ? "characters" : "character") << endl;
      fs.close();
    }
  
  return 0;
}
