#include <stdio.h>
#include <stdlib.h>

typedef int STACK_TYPE;         /* 格納データの型 */

#define STACK_SIZE 5            /* 格納データの最大個数 */

STACK_TYPE gStack[STACK_SIZE];  /* データ格納用の配列 */
int gSNum = 0;                  /* 格納データの個数 */

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

STACK_TYPE peek(void){
  if(isStackEmpty()){
   error("スタックは空状態です。");
  }
  
  return gStack[gSNum-1];
}


void push(STACK_TYPE x) {
  if (isStackFull())
    error("push: スタックはフル状態です。");

  gStack[gSNum] = x;
  gSNum++;
}

STACK_TYPE pop(void) {
  STACK_TYPE x;
  
  if (isStackEmpty())
    error("pop: スタックは空状態です。");

  x = gStack[gSNum - 1];
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
  STACK_TYPE x, p=0;
  int i;

  initStack();

  for (i = 1; i < argc; i++) {
    if(p==0){
    x = atoi(argv[i]);
    printf("push(%d)", x);
    push(x);
    printStack(1);
    p=peek();
    printf("%d peek()\n",p);
    }

    else{
    x = atoi(argv[i]);
    printf("push(%d + %d)", p, x);
    push(x+p);
    printStack(1);
    if(!isStackFull()){
    p=peek();
    printf("%d peek()\n",p);
    }
    else break;
   } 
  }
  printf("----------\n");
  while (1) {
    printf("%3d pop()", pop());
    printStack(1);
  }
  return 0;
}

