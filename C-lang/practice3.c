#include <stdio.h>

int main(){
  /**
   * Task:
   * 1, Asks a user to input 2 integer numbers.
   * 2, if the sum of these numbers (S) is less than 20:
          counts how many odd numbers are between 0 and S;
        else
          counts how many numbers divisible by 7 are between 20 and S.
   */

  int a, b;

  printf("Enter 1st integer number:\n");
  scanf("%d", &a);
  printf("Enter 2nd integer number:\n");
  scanf("%d", &b);

  int c = a + b;

  if(c < 20){
    int n;
    n = (c + 1) /2;
    if(n == 0){
    printf("Only one odd number is between 0 and %d.\n", c);
  }else{
    printf("%d odd numbers are between 0 and %d.\n", n, c);
  }
  }else{
    int m;
    m = c/7 - 2;
    if(m == 0){
      printf("There is no number divisible by 7 is between 20 and %d.\n", c);
    }else if(m == 1){
        printf("Only one number divisible by 7 is between 20 and %d.\n", c);
    }else{
      printf("%d numbers divisible by 7 are between 20 and %d.\n", m, c);
    }
  }
}

