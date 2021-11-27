#include <iostream>
#include <fstream>
#include <locale>
#include <stdio.h>
#include <string.h>
#include<cstdlib>
#include<ctime>

using namespace std;
/* ----- function prototypes -----
main body is located below `main()`
Please search by name
*/
void addNewContact(); //option1
void retrieveContact(); //option2
void printAllContacts(); //option3
int countNumberOfContacts(); //option4
void showRandomContact(); //option5
void addNewContactSort(); //option6

// other commonly used functions
void getAttributeSize(char [], int []);
void displayContact(char []);
int findSubstring(char[], char[]);


int main()
{
  char yn = 'N';
  int option;
  do
  {
    cout << "---------- Contact List Application ----------" << endl;
    cout << "What do you want to do?" << endl;
    cout << "(1): Add a new contact\n(2): Retrieve contact\n(3): Print all the contacts\n"
    << "(4): Count total number of contacts\n(5): Show a random contacts\n"
    <<"(6): Add a new contact sorted\n(7):Exit\nPlease enter the corresponding number: ";
    cin >> option;
    
    switch (option) {
      case 1:
        addNewContact();
        break;
      case 2:
        retrieveContact();
        break;
      case 3:
        printAllContacts();
        break;
      case 4:
        cout << "Number of the contacts: " << countNumberOfContacts() << endl;
        break;
      case 5:
        showRandomContact();
        break;
      case 6:
        addNewContactSort();
        break;
      case 7:
        return 0;
      default:
        cout << "Wrong input." << endl;
        break;
    }
    
    cout << "Do you wish to continue (Y/N)?: ";
    cin >> yn;
  } while ((yn=='Y') || (yn=='y'));
}

// Option1
void addNewContact()
{
  char firstName[50];
  char lastName[50];
  char tel[20];
  char email[100];
  fstream fs;
  
  fs.open("contacts.txt", ios::app);

  cout << "First Name: ";
  cin >> firstName;
  cout << "Last Name: ";
  cin >> lastName;
  cout << "Telphone Number: ";
  cin >> tel;
  cout << "Email: ";
  cin >> email;

  //append those attributes
  fs << firstName << "," << lastName << "," << tel << "," << email << "," << endl;
  
  fs.close();
}

//option2
void retrieveContact()
{
  fstream fs;
  char find[50], str[256];
  bool found = false;
  
  fs.open("contacts.txt", ios::in);
  if(fs.fail())
  {
    cout << "File does not exist." << endl;
  }
  else
  {
    cout << "Enter the last name of the contact: ";
    cin >> find; //given last name
    fs.getline(str,256);
    while(!fs.eof())
    {
      if(findSubstring(str, find) != -1)
      {
        found = true;
        cout << "Contact is found!" << endl;
        displayContact(str);
      }
      fs.getline(str,256);
    }
    if(!found)
      cout << "Contact is not found." << endl;
    fs.close();
  }
}

//option3
void printAllContacts()
{
  fstream fs;
  char str[256];
  fs.open("contacts.txt", ios::in);
  if(fs.fail())
  {
    cout << "File does not exist." << endl;
  }
  else
  {
    while(!fs.eof())
    {
      fs.getline(str, 256);
      displayContact(str);
    }
  }
}

//option4
int countNumberOfContacts()
{
  fstream fs;
  char str[256];
  int counter = 0;
    
  fs.open("contacts.txt", ios::in);
  if(fs.fail())
  {
    cout << "File does not exist" << endl;
  }
  else
  {
    fs.getline(str,256);
    while(!fs.eof())
    {
      counter ++;
      fs.getline(str,256);
    }
    fs.close();
  }
  return counter;
}

//option5
void showRandomContact()
{
  fstream fs;
  char str[256];
  int n; //random number
  int numOfContact = countNumberOfContacts();
  srand(time(0));
  
  fs.open("contacts.txt", ios::in);
  if(fs.fail())
  {
    cout << "File does not exist" << endl;
  }
  else
  {
    n = rand()%numOfContact; //create random number rangin from 0 to (# of contact-1)
    fs.getline(str,256);
    
    for(int i=0; i<n; i++) //do getline n times to store random line to `str`
      fs.getline(str,256);
    
    displayContact(str);
    fs.close();
  }
}

//option6
void addNewContactSort()
{
  addNewContact();
  fstream fs, fsort;
  char str[256], lName[50];
  int i, j, k, arr[4];
  int numOfContact = countNumberOfContacts();
  string lNames[numOfContact], strs[numOfContact], temp;
  bool duplicate;
  
  fs.open("contacts.txt", ios::in);
  if(fs.fail())
  {
    cout << "File does not exist" << endl;
  }
  else
  {
    /* `for` loop below explanation;
     * what this code do is to retrieve only LastNames from "contacts.txt"
     * and store them into string-type array `lNames[]'.
     * 
     * The nested for-loop is to extract LastName from each line
     * by using `getAttrivuteSize` function, we can get the starting point
     * and size of the each LastName.
     * According to those, we store LastName into char-array 'lName' char by char
     * 
     * WHY string-type array is used instead of *char[] ??
     * When I tried using *char[] to store each LastNames,
     * it stores same LastNames into every elements
     * ,which is probably because `*char[]` just points to the address.
     * Since i use only one variable 'lName[]' repeatedly,
     * although the values to be stored in 'lName` changed at runtime,
     * the address itself remain the same.
     * Thus, `*char[]` stores the (same address) * (# of contacts) times.
     * 
     * Because of the reason above,
     * I have to use string-type array `lNames[]` to store each LastNames,
     * which change at runtime.
    */
    for(i=0; i<numOfContact; i++)
    {
      fs.getline(str,256);
      getAttributeSize(str, arr);
      k=0;
      for(j=arr[0]+1; j<(arr[0]+1+arr[1]); j++)
      {
        lName[k] = str[j];
        k++;
      }
      lName[k] = '\0';

      lNames[i] = lName;
    }
    
    /*test for string-type array
    cout << "All the contacts: " << endl;
    for(i=0; i<numOfContact; i++)
      cout << lNames[i] << endl;
    */
    
    // bubble sort, sorting by LastName
    for(i=0; i<numOfContact-1; i++)
    {
      for(j=0; j<numOfContact-i-1; j++)
      {
        if (lNames[j] > lNames[j+1])
        {
          temp = lNames[j];
          lNames[j] = lNames[j+1];
          lNames[j+1] = temp;
        }
      }
    }
    
    /*test for sorting
    cout << "Sorted contacts: " << endl;
    for(i=0; i<numOfContact; i++)
      cout << lNames[i] << endl;
    */
    
    fs.close();
    
    /* ----- writing to "contacts_sorted.txt" -----*/
    fsort.open("contacts_sorted.txt", ios::out);
    for(i=0; i<numOfContact; i++)
    {
      fs.open("contacts.txt", ios::in);
      
      strcpy(lName, lNames[i].c_str());
      //in order to use `findSubstring` function below,
      //string-type is converted into char-array type

    /* ----- `while loop` below explanation ----- 
     * what this code do is to sort the contacts based on LastName
     * specifically,
     * 1: find the line which contains the given LastName using `findSubstring`
     * 2: check the duplication
     * 3: store the line into string-type array `strs`
     * 
     * 1) looping though "contacts.txt" line by line and check the match
     * 2) if there is more than one same LastNames, duplications would occur.
     *    Therefore, before proceeding (3), we check the duplication 
     * 3) After duplication is handled, we store each line into `strs`
     */
      fs.getline(str, 256);
      while(!fs.eof())
      {
        if(findSubstring(str, lName) != -1)
        {
          duplicate = false;
          for(j=0; j<numOfContact; j++)
          {
            if(strs[j] == str)
              duplicate = true;
          }
          if(!duplicate)
            strs[i] = str;
        }
        fs.getline(str, 256);
      }
      fs.close();
    }
    
    //finally, overwrite sorted contacts into "contacts_sorted.txt"
    for(i=0; i<numOfContact; i++)
      fsort << strs[i] << endl;
    
    fsort.close();
  }
}

/*----- Common functions -----*/
int findSubstring(char s1[], char s2[])
{
  /* function to find the substring, specifically in this project, 
   * to find the specific LastName from the given string
   */
  int i, j, index=-1;
  for(i=0; i<=(strlen(s1)-strlen(s2)); i++)
  {
    for(j=0; j<strlen(s2); j++)
    {
      if(s1[i+j]!=s2[j])
      {
          index=-1;
          break;
      }
      index = i; //updating index if substring is found
    }
    if(index!=-1) return index; //if substring is found, return the index
  }
  return index; //-1 is returned if substing is not found
}

void displayContact(char str[256])
{
  /*
   function to display attributes(Fname, Lname, Tel, Email) for given contact
   */
  int a, b, c, d, sizeOfEachInfo[4];
  
  getAttributeSize(str, sizeOfEachInfo);
  
  // display each attribute
  cout << "\n----- contact infomation -----" << endl;
  cout << "\nFirst Name: ";
  for(a=0; a<sizeOfEachInfo[0]; a++)
    cout << str[a];
  
  cout << "\nLast Name: ";
  for(b=a+1; b<(a+1+sizeOfEachInfo[1]); b++)
    cout << str[b];
  
  cout << "\nTelephone Number: ";
  for(c=b+1; c<(b+1+sizeOfEachInfo[2]); c++)
    cout << str[c];
  
  cout << "\nEmail: ";
  for(d=c+1; d<(c+1+sizeOfEachInfo[3]); d++)
    cout << str[d];
  
  cout << endl;
}

void getAttributeSize(char str[256], int size[])
{
  /*
   function to count the number of characters
   for each attribute(Fname, Lname, Tel, Email) for given contact
   */
  int i, j=0, counter=0;
  
  for(i=0; i<4; i++)
  //counting the number of characters for each attribute
  //and store into `sizeOfEachInfo`
  {
    for(; str[j]!=','; j++)
      counter ++;
    j++;
    size[i]=counter;
    counter = 0;
  }
}