#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5

int gStack[STACK_SIZE];
int gSNum = 0;

void initStack(void) {
  gSNum = 0;
}

int isStackEmpty(void) {
  return gSNum==0;
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
  int i;

  initStack();

  for (i = 1; i < argc; i++) {
    if (isStackFull()){
     printf("pop() %d", pop());
     printStack(1);
    }
    printf("push(%d)", atoi(argv[i]));
    push(atoi(argv[i]));
    printStack(1);
  }
  printf("----------\n");
  while (!isStackEmpty()) {
    printf("pop() %d", pop());
    printStack(1);
  }
  return 0;
}


