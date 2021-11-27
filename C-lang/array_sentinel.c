#include <stdio.h>
#include <stdbool.h>
#define LENGTH 9

int main(){
  int a[] = {1, 38, 2, 9, 12, 2, 4, 20, 17};
  int x, i = 0;
  printf("Input an element value you want to find:");
  scanf("%d", &x);
  //scanfに\nとかを加えるとうまく動かなくなる、あまり触らないで、前後で調整
  a[LENGTH] = x;
  bool b = false;

  while(i != LENGTH){
  if(a[i] == x) {
    printf("\nElement %d is found at position with index %d.\n", x, i);
    i ++;
    b = true;}
    else i++;
  }
  if (b == false) printf("\nElement %d is not found.\n", x);



  return 0;
}

#include <stdio.h>
#define LENGTH 9

int main(){
  int a[] = {1, 38, 2, 9, 12, 2, 4, 20, 17};
  int x, i = 0;
  printf("Input an element value you want to find:");
  scanf("%d", &x);
  //scanfに\nとかを加えるとうまく動かなくなる、あまり触らないで、前後で調整
  a[LENGTH] = x;

  while(a[i] != x) i++;
  if(i == LENGTH) printf("\nElement %d is not found.\n", x);
  else printf("\nElement %d is found at position with index %d.\n", x, i);

  return 0;
}
