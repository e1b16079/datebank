#include <stdio.h>
#include <stdlib.h>

typedef int STACK_TYPE;         /* 格納データの型 */

#define STACK_SIZE 5            /* 格納データの最大個数 */

STACK_TYPE gStack[STACK_SIZE];  /* データ格納用の配列 */
int gSNum = 0;                  /* 格納データの個数 */

void initStack(void);
void push(STACK_TYPE x);
STACK_TYPE  pop(void);
int  isStackEmpty(void);
int  isStackFull(void);
void printArray(int tabs);
void error(char *s);

/***** ここから編集する *****/
void push(STACK_TYPE x) {
  if (isStackFull())
    error("push: スタックはフル状態です。");

  gStack[STACK_SIZE-1-gSNum] = x;
  gSNum++;
}

STACK_TYPE pop(void) {
  STACK_TYPE x;

  if (isStackEmpty())
    error("pop: スタックは空状態です。");

  x = gStack[STACK_SIZE-gSNum];
  gSNum--;
  return x;
}
/***** ここまでを編集する *****/

void error(char *s) {
  fflush(stdout);
  fprintf(stderr, "\n%s\n", s);
  exit(1);
}

void initStack(void) {
  gSNum = 0;
}

int isStackEmpty(void) {
  return gSNum == 0;
}

int isStackFull(void) {
  return gSNum == STACK_SIZE;
}

void printArray(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("Array[");
  for (i = 0; i < STACK_SIZE; i++) {
    printf("%3d",  gStack[i]);
    if (i != STACK_SIZE - 1) printf(" ");
  }
  printf("]\n");
}

int main(int argc, char *argv[]) {
  STACK_TYPE x, y, sum = 0;
  int i;

  initStack();

  for (i = 1; i < argc; i++) {
    if (isStackFull()) break;
    x = atoi(argv[i]);
    if (x < 0 && !isStackEmpty()) {
      y = pop();
      printf("%3d pop()", y);
      printArray(1);
      x = y + x;
    }
    printf("push(%d)", x);
    push(x);
    printArray(1);
  }
  printf("----------\n");
  while (!isStackEmpty()) {
    y = pop();
    printf("%3d pop()", y);
    printArray(1);
    sum += y;
  }
  printf("----------\n");
  printf("合計 %d\n", sum);
  return 0;
}

