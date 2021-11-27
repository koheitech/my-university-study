/* -------------------- pointer arithmetics -------------------- */
#include <iostream>
using namespace std;

int main()
{
  char str[4] = "Zen";
  char *p;
  p = &str[0];

  cout << *p << endl;

  cout << *(p+1) << endl;

  p++;

  cout << *p << endl;

  cout << *p + 1 << endl; //output: 102 because of the implicit conversion of ASCII code
  // *p = 'e': this is 101 in ASCII code
  // thus, 101 + 1 = 102

  cout << char(*p + 1) << endl; //output: f
  // explicit conversion
}



/* -------------------- array and pointer --------------------*/
#include <iostream>
using namespace std;

int main()
{
  // this is an example to show 4 different ways to print out an array
  int grade[5] = {1, 2, 3, 4, 5};
  int* ptr = grade;
  
  for(int i=0; i<5; i++)
  {
    cout << *(grade+i);
    cout << grade[i];
    cout << *(ptr+i);
    cout << ptr[i];
    cout << endl;
  }
}


/* --------------------  --------------------*/
#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  char word[20];
  char* ptr;
  
  cout << "Type a word: ";
  cin >> word;
  
  ptr = &word[0];
  
  while(*ptr != '\0')
  {
    if(*ptr == 'h')
      count ++;
    ptr++;
  }
  
  if(count == 0)
    cout << "letter 'h' did not appear." << endl;
  else if(count ==1)
    cout << "letter 'h' appeared once." << endl;
  else
    cout << "letter 'h' appeared " << count << " times." << endl;
}

/* -------------------- array and pointer --------------------*/