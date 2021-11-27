# include <iostream>
using namespace std;
bool Palindrome(char[], int, int);

int main()
{
  char arr[] = "tonanot";
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  //cout << "size: " << sizeOfArray << endl;
  bool palindrome = Palindrome(arr, 0, sizeOfArray-2);
  cout << "The given sentence is " << (palindrome ? "Palindrome" : "NOT Palindrome") << endl;
  return 0;
}

bool Palindrome(char arr[], int start, int end)
{
  if((end+1)-start != 1 && (end+1)-start != 0)
    if(arr[start] != arr[end])
      return false;
    Palindrome(arr, start+1, end-1);
  return (arr[start] == arr[end]) ? true:false;
}