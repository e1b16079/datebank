#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5            /* 格納データの最大個数 */

int gStack[STACK_SIZE];         /* データ格納用の配列 */
int gSNum = 0;                  /* 格納データの個数 */

void initStack(void) {
  gSNum = 0;
}

int isStackEmpty(void) {
  return gSNum == 0;
}

int isStackFull(void) {
  return gSNum == STACK_SIZE;
}

void push(int x) {
  gStack[gSNum] = x;
  gSNum++;
}

int pop(void) {
  int x = gStack[gSNum - 1];
  gSNum--;
  return x;
}

void printStack(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("STACK[");
  for (i = 0; i < gSNum; i++) {
    printf("%d",  gStack[i]);
    if (i != gSNum - 1) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}

int main(int argc, char *argv[]) {
  int i, x, y, sum=0;

  initStack();

  for (i = 1; i < argc; i++) {
    if (isStackFull()) break;
    x = atoi(argv[i]);
    if(x%2==0){
    printf("push(%d)", x);
    push(x);
    printStack(1);
    }
    }
  printf("----------\n");
  while (!isStackEmpty()) {
    y=pop();
    sum= sum+y;
    printf("pop() %d", y);
    printStack(1);
  }
  printf("----------\n");
  printf("合計 %d\n",sum);
  return 0;
}

