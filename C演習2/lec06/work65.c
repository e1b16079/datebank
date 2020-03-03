#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(int argc, char *argv[]) {
  STACK_TYPE x;
  int i; 

  initStack();

  for (i = 1; i < argc; i++) {
    if (isStackFull()) break;
    x = atof(argv[i]);
    printf("push(%.1f)", x);
    push(x);
    printStack(1);
  }
  printf("----------\n");
  while (!isStackEmpty()) {
    printf("%.1f pop()", pop());         /* 教科書と出力形式を変えています。 */
    printStack(1);
  }
  return 0;
}
