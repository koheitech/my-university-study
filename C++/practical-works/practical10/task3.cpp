# include <iostream>
using namespace std;
int Count(char [], int);

int main()
{
  char arr[] = "123456789";
  cout << Count(arr, 0) << endl;
  return 0;
}

int Count(char arr[], int n)
{
  if(arr[n] == '\0')
      return 0;
  
  return 1 + Count(arr, n+1);
}
