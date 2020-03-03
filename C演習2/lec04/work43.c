#include <stdio.h>
#include <stdlib.h>

typedef int STACK_TYPE;        /* スタック要素の型 */

#define STACK_SIZE 5

STACK_TYPE gStack[STACK_SIZE];
int gSNum = 0;                  /* この課題では使いません。 */

int main(int argc, char *argv[]) {
  STACK_TYPE x;
  int i;

  for (i = 1; i < argc; i++) {
    /***** ここから編集する *****/
    if (STACK_SIZE-i<0) break;
    x = atoi(argv[i]);
    gStack[STACK_SIZE-i]= x;
    printf("gStack[%d] = %d\n",STACK_SIZE-i,x);



    /***** ここまでを編集する *****/
  }
  printf("----------\n");

  /* 配列 gStack の内容を出力する。*/
  for (i = 0 ; i < STACK_SIZE; i++) {
    printf("%2d = gStack[%d]\n", gStack[i], i);
  }

  return 0;
}

