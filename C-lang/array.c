#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, j, mas[5][4];
  srand(time(NULL));

  for(i=0; i<5; i++){
    for(j=0; j<4; j++){
      mas[i][j] = rand()%30-15;
      printf("%5d", mas[i][j]); // interger 5 sapaces
    }printf("\n");
  }
  return 0;
}
