/* ----- writing to a file ----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream outFile; //an object of type file
  
  outFile.open("testOut.txt", ios::out);
  //if there is no such file, create new one
  //if there is, overwrite the content
  outFile << 2 + 2;
  outFile.close();
  return 0;
}

/* ----- reading from a file ----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int number;
  fstream inFile; //an object of type file
  
  inFile.open("testOut.txt", ios::in);
  inFile >> number;
  cout << "The number read from the file: " << number << endl;
  inFile.close();
  
  return 0;
}

/* ----- reading 2 lines from a file ----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char firstName[20], lastName[20];
  int score;
  fstream inFile; //an object of type file
  
  inFile.open("test.txt", ios::in);
  
  inFile >> firstName >> lastName >> score;
  cout << "Data read: " << endl;
  cout << firstName << " " << lastName <<  " " << score << endl;
  
  inFile >> firstName >> lastName >> score;
  cout << "Data read: " << endl;
  cout << firstName << " " << lastName <<  " " << score << endl;
  
  inFile.close();
  
  return 0;
}

/* ----- testing a file existence----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char firstName[20], lastName[20];
  int score;
  fstream inFile; //an object of type file
  
  inFile.open("pow.txt", ios::in);
  if(inFile.fail())
  /* HERE, built-in function `fail()` is used
   * it returns true if the given file exist
   *            false if not
   */
  {
    cout << "File does not exist" << endl;
    cout << "Exit the program" << endl;
    //no need for closing the stream because there is no file to be open first of all
  }
  else
  {
    inFile >> firstName >> lastName >> score;
    cout << "Data read: " << endl;
    cout << firstName << " " << lastName <<  " " << score << endl;
    
    inFile >> firstName >> lastName >> score;
    cout << "Data read: " << endl;
    cout << firstName << " " << lastName <<  " " << score << endl;
    inFile.close();
  }
  return 0;
}

/* ----- example with getline function ----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char str[200];
  fstream inFile; //an object of type file
  
  inFile.open("test.txt", ios::in);
  if(inFile.fail())
  {
    cout << "File does not exist" << endl;
    cout << "Exit the program" << endl;
    //no need for closing the stream because there is no file to be open first of all
  }
  else
  {
    inFile.getline(str, 200);
    cout << "Data read: " << str << endl;
    inFile.getline(str, 200);
    cout << "Data read: " << str << endl;
    
    inFile.close();
  }
  return 0;
}

/* ----- example with `eof()` function ----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char str[200];
  fstream inFile, outFile;
  
  inFile.open("test.txt", ios::in);
  outFile.open("testOutput.txt", ios::out);
  if(inFile.fail())
  {
    cout << "File does not exist" << endl;
    cout << "Exit the program" << endl;
  }
  else
  {
    while(!inFile.eof())
      /* By using `eof()` function along with while loop,
       * it loops until this is not EndOfFile
       * i.e. we can loop though all the texts in the given file
       */
    {
      inFile.getline(str, 200);
      outFile << str << endl;
    }
    
    inFile.close();
    outFile.close();
  }
  return 0;
}

/* ----- appending to the file ----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream outFile, appFile;
  
  outFile.open("testAppend.txt", ios::out);
  outFile << 1 << endl << 2 << endl << 3 << endl;
  outFile.close();
  
  appFile.open("testAppend.txt", ios::out | ios::app);
  appFile << 10 << endl << 20 << endl << 30 << endl;
  appFile.close();
  
  return 0;
}

/* ----- example with `get` function ----- */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream outFile, fp;
  char c;
  
  outFile.open("pow.txt", ios::out);
  outFile << "Pow pow Pow pow";
  outFile.close();
  
  fp.open("pow.txt", ios::in);
  if(fp.fail())
  {
    cout << "File not found" << endl;
  }
  else
  {
    c = fp.get();
    // `get()` function can take only one character
    
    while(c!=EOF)
    {
      cout << c << endl;
      c = fp.get();
    }
    fp.close();
  }
  return 0;
}


/*---- messy example from Youtube -----*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char arr1[100], arr2[100];
  cout << "Enter your name and age: ";
  cin.getline(arr1, 100);

  ofstream myFile("text.txt");

  if(myFile.is_open())
    myFile << arr1;
  
  myFile.close();
  cout << "File write operation is done successfully." << endl;
  
  cout << "- - - - - - - - - - - - - - - - - - - -" << endl;
  cout << "reading the file" << endl;
  
  ifstream obj("text.txt");
  obj.getline(arr2, 100);
  cout << "arr1's content: " << arr1 << endl;
  cout << "File read operation is done successfully." << endl;
  obj.close();

  
  
  return 0;
}
