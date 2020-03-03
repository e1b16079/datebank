#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5            /* 格納データの最大個数 */
typedef int QUEUE_TYPE;         /* 格納データの型 */

QUEUE_TYPE gQueue[QUEUE_SIZE];  /* データ格納用の配列 */
int gQNum = 0;                  /* 格納データの個数 */

/* 関数原型宣言の追加 */
void initQueue(void);
void enqueue(QUEUE_TYPE x);
QUEUE_TYPE dequeue(void);
void printQueue(int tabs);

void initQueue(void) {
  gQNum = 0;
}

void enqueue(QUEUE_TYPE x) {
 gQueue[gQNum++]= x ;
}

QUEUE_TYPE dequeue(void) {
  QUEUE_TYPE x;
  int i;

  x = gQueue[0];
  for(i=1;i<=gQNum-1;i++){
    gQueue[i-1]=gQueue[i];
  }
  gQNum--;
  
  return x;
}

int main(int argc, char *argv[]) {
  QUEUE_TYPE x;
  int i;

  initQueue();

  for (i = 1; i < argc; i++) {
    if(i%2==1){
    x = atoi(argv[i]);
    printf("enqueue(%d)", x);
    enqueue(x);
    printQueue(1);
  }
  }
  printf("----------\n");
  for (i = 1; i <= argc/2; i++) {
    printf("%3d dequeue()", dequeue());
    printQueue(1);
  }
  
  return 0;
}

void printQueue(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("QUEUE[");
  for (i = 0; i < gQNum; i++) {
    printf("%d",  gQueue[i]);
    if (i != gQNum - 1) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}

