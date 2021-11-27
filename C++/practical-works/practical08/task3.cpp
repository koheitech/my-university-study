#include <iostream>
using namespace std;

void printArray(int* const list, int size);
int* reverse(int* list, int size);

int main()
{
  int size = 10;
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int* revarr;
  cout << "Original array: ";
  printArray(arr, 10);
  
  revarr = reverse(arr, size);
  
  cout << endl << "Reversed array: ";
  printArray(revarr, size);
}

int* reverse(int* list, int size)
{
  int* result  = new int[size];

  for(int i=0; i<size; i++)
  {
    result[size-1-i] = list[i];
  }

  return result;
}

void printArray(int* const list, int size)
{
  for(int i=0; i<size; i++)
    cout << list[i] << " ";
}
