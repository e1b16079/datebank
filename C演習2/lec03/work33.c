#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5            /* スタックの大きさ */

int gStack[STACK_SIZE];         /* スタック用の配列 */
int gSNum = 0;                  /* 格納データ数 */

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

int main(void) {
  int x;

  initStack();

  while (scanf("%d", &x) != EOF) {
    if (isStackFull()) {
      break;
    }
    push(x);
    printf("push(%d)", x);
    printStack(1);
  }
  printf("----------\n");
  while (!isStackEmpty()) {
    pop();
    printf("pop() %d", x);
    printStack(1);
  }
  return 0;
}

