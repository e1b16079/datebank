#include <stdio.h>

int main(void) {
  int i;
  char x;

  for (i = 0; i < 16; i++) {

/***** ここから修正します。*****/ 
  if(i<10){
   x = i + '0';
  }
  else{
  x = (i-10) + 'A';
  }



/***** ここまで修正します。*****/

    printf("%2d   '%c'\n", i, x);
  }

  return 0;
}

