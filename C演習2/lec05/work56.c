#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 8            /* 格納データの最大個数 */
typedef int QUEUE_TYPE;         /* 格納データの型 */

QUEUE_TYPE gQueue[QUEUE_SIZE];  /* データ格納用の配列 */
int gQNum = 0;                  /* 格納データの個数 */

/* 関数原型宣言の追加 */
void error(char *s);
void initQueue(void);
int isQueueEmpty(void);
int isQueueFull(void);
void enqueue(QUEUE_TYPE x);
QUEUE_TYPE dequeue(void);
void printQueue(int tabs);

void initQueue(void) {
  gQNum = 0;
}

int isQueueEmpty(void) {
  return gQNum == 0;
}

int isQueueFull(void) {
   return gQNum == QUEUE_SIZE;
}

int main(int argc, char *argv[]) {
  QUEUE_TYPE x, y;
  int i;

  if (argc < 2)
    error("main: 引数を指定してください。");

  initQueue();
  for (i = 1; i < argc; i++) {
    if (isQueueFull()) { 
      error("main: エンキューできません。");
    }
    x = atoi(argv[i]);          /* プログラム引数 x をエンキューする */
    printf("enqueue(%d)", x);
    enqueue(x);
    printQueue(1);
  }
  printf("----------\n");
  while (!isQueueEmpty()) {
    y = dequeue();
    printf("%3d dequeue()", y);
    printQueue(1);
    y=y-10;
    if(y>0){
    if(y%2==0){
    printf("enqueue(%d)", y/2);
    enqueue(y/2);
    printQueue(1);
    printf("enqueue(%d)", y/2);
    enqueue(y/2);
    printQueue(1);
    }
    else{
    printf("enqueue(%d)", y/2);
    enqueue(y/2);
    printQueue(1);
    printf("enqueue(%d)", y/2+1);
    enqueue(y/2+1);
    printQueue(1);
  }
  }
  }
  return 0;
}

void error(char *s) {
  fflush(stdout);
  fprintf(stderr, "\n%s\n", s);
  exit(1);
}

void enqueue(QUEUE_TYPE x) {
  if (isQueueFull())
    error("enqueue: 待ち行列はフル状態です。");

  gQueue[gQNum++] = x;
}

QUEUE_TYPE dequeue(void) {
  QUEUE_TYPE x;
  int i;

  if (isQueueEmpty())
    error("dequeue: 待ち行列は空状態です。");

  x = gQueue[0];
  for (i = 1; i <= gQNum - 1; i++)
    gQueue[i - 1] = gQueue[i];
  gQNum--;
  return x;
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

