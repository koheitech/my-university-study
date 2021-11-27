/* ----- ex1  ----- 
 * a program to read number,
 * -1 to finish and write them to a file */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream myFile;
  int input;
  char c;
  myFile.open("ex1.txt", ios::out);
  cout << "Input integers (-1 to termiante): " << endl;
  cin >> input;
  
  while(input!=-1)
  {
    myFile << input << " ";
    cin >> input;
  }
  
  myFile.close();

/* --- additional function to output the content of file to terminal ---
  myFile.open("ex1.txt", ios::in);
  c = myFile.get();
  while(!myFile.eof())
  {
    cout << c;
    c = myFile.get();
  }
  myFile.close();
*/
  
  return 0;
}



/* ----- ex2 -----
write a program that reads characters repeatedly, one at a time, until the end of file
and counts the number of alpabetic characters read and display.
*/
#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream outStr, inStr;
  char c;
  int counter = 0;
  
  //writing down some texts into "ex2.txt" file
  outStr.open("ex2.txt", ios::out);
  outStr << "Hello there!!";
  outStr.close();

  //read "ex2.txt" file
  inStr.open("ex2.txt", ios::in);
  if(inStr.fail())
    {
      cout << "File does not exist" << endl;
      cout << "Exit the program" << endl;
    }
    else
    {
      c = inStr.get(); //read by one char 
      while(c != EOF)
      {
        if(isalpha(c)) //built-in function to check alphabet
          counter++;
        c = inStr.get();
      }
      cout << "The file contains " << counter << " alphabetic characters" << endl;
      inStr.close();
    }
  
  return 0;
}

/* ----- ex3 -----
Write a program that reads 3 sentences from a file,
stores them into another file, all 3 on the same line.
Each sentence should be separated by the character '#' in this new file.
It then reads the line from the file, and displays the sentences on the screen,
one line per sentence
*/
#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream outStr, inStr;
  char c;
  
  //reading "ex3.txt" file
  inStr.open("ex3.txt", ios::in);
  if(inStr.fail())
  {
    cout << "File does not exist" << endl;
    cout << "Exit the program" << endl;
  }
  else
  {
    outStr.open("ex3_written.txt", ios::out);
    c = inStr.get(); //reading character by character
    while(c != EOF)
    {
      if(c == '\n')
      {
        //if \n is read, 
          // push `#` into "ex3_written.txt" file
          // and cout `\n` to terminal
        outStr << "#";
        cout << "\n";
      }
      else
      {
        //Otherwise, just push and cout
        outStr << c;
        cout << c;
      }
      c = inStr.get();
    }
    inStr.close();
    outStr.close();
  }

  return 0;
}


/* ----- ex4 -----
Write a program that reads 3 sentences from a file,
stores them into another file, all 3 on the same line.
Each sentence should be separated by the character '#' in this new file.
It then reads the line from the file, and displays the sentences on the screen,
one line per sentence
*/
#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
  fstream inStr;
  char str[200];
  int counter = 0; 
  
  inStr.open("ex4.txt", ios::in);
  if(inStr.fail())
  {
    cout << "File does not exist" << endl;
    cout << "Exit the program" << endl;
  }
  else
  {
    cout << left << setw(30) << "Name:" << left << setw(30) << "Telephone number:" << endl;
    inStr.getline(str, 30, ',');
    while(!inStr.eof())
    {
      
      if(counter%2 == 0)
        cout << endl;
      
      cout << left << setw(30) << str;
      inStr.getline(str, 30, ',');
      
      counter++;
    }
    cout << endl;
    inStr.close();
  }

  return 0;
}
