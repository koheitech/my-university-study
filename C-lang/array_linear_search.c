#include <stdio.h>
#include <stdbool.h>
#define LENGTH 9

int main(){
  int a[] = {1, 38, 2, 9, 12, 2, 4, 20, 17};
  int x, i;
  char yn;
  bool f = false;

  do{
  printf("Input an element value you want to find:");
  scanf("%d", &x);

  for(i=0; i<LENGTH; i++){
    if(a[i] == x){
      f = true;
      break;
    }
  }

  if(f) printf("\nElement %d is found at position with index %d.\n", x, i);
  else printf("Element %d is not found.\n", x);
  printf("Want to continue?(Y/N)");
  scanf("\n%c", &yn);
}while(yn == 'y' || yn == 'Y');
  return 0;
}

// finding only one element
-----------------------------
// finding several elements in an array

#include <stdio.h>
#include <stdbool.h>
#define LENGTH 9

int main(){
  int a[] = {1, 38, 2, 9, 12, 2, 4, 20, 17};
  int x, i;
  char yn;
  bool f = false;

  do{
  printf("Input an element value you want to find:");
  scanf("%d", &x);

  for(i=0; i<LENGTH; i++){
    if(a[i] == x){
      f = true;
      printf("\nElement %d is found at position with index %d.\n", x, i);
    }
  }

  if (f != true) printf("Element %d is not found.\n", x);
  printf("Want to continue?(Y/N)");
  scanf("\n%c", &yn);
}while(yn == 'y' || yn == 'Y');
  return 0;
}
