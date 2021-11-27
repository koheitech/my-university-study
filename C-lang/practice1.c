#include <stdio.h>
#include <math.h>

int main(void){
  /**
   * Task: Create a program that processes data inputted by a user according to the task variant
   * 
   * A list of steps:
   * 1. A user of the program inputs a value of x.
   * 2. The program computes two intermediate values “a” and “b”, and outputs these values on a screen.
   * 3. The program computes and outputs the final result “y” using the first or the second expression,
        depending on the given condition:
        y = (c) ? first expression: second expression;
   *
   * a = (5 * x)/(2 * (x*x*x)); 
   * b = fabsf((2 * x) - (3 * (x*x)));
   * c: (a*a) > (b*b*b)
   * 1st expression: a + b*(a + b);
   * 2nd expression: (a*a) - (b*b);
   */

  float x, y1, y2, a, b, aa, bb;
  char yn;
  do{
    printf ("Please enter a number(x) except for 0:\n");
    scanf ("%f",&x);

    if(x == 0){
      printf("a = 5x/2x^3 is undifined.\n" );
    }else{
      a = (5 * x)/(2 * (x*x*x));
      printf ("a = 5x/2x^3 is %.3f\n", a);

      b = fabsf((2 * x) - (3 * (x*x)));
      printf ("b = |2x - 3x^2| is %.3f\n", b);
      aa = a*a;
      bb = b*b*b;
      printf("\n(a^2) is %.3f and (b^3) is %.3f\n", aa, bb);

      if((a*a) > (b*b*b)){
        y1 = a + b*(a + b);
        printf("\ncondition (a^2)>(b^3) is true\n");
        printf("=> 1st expression: y = a+b(a+b) is %.3f\n", y1);
      }else{
        y2 = (a*a) - (b*b);
        printf("\ncondition (a^2)>(b^3) is false\n");
        printf("=> 2nd expression: y = a^2-b^2 is %.3f\n", y2);
      }
    }
    printf ("\nDo you wish to continue?(Y/N):\n");
    scanf (" %c", &yn);
  }while(yn == 'y' || yn == 'Y');

  return 0;
}
