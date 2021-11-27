#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream fs;
  int num, sum = 0;

  //read ExerciseB.txt" file
  fs.open("ExerciseB.txt", ios::in);
  if(fs.fail())
    {
      cout << "File does not exist" << endl;
      cout << "Exit the program" << endl;
    }
    else
    {
      while(!fs.eof())
      {
        fs >> num;
        //cout << "Read number: " << num << endl; //for test
        sum += num;
      }
    }
      cout << "SUM:  " << sum << endl;
      fs.close();
  }
