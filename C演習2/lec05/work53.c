#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5            /* 格納データの最大個数 */
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
void printArray(int tabs);

/* enqueue, dequeue, printQueue 関数を修正します。*/
void enqueue(QUEUE_TYPE x) {
  if (isQueueFull())
    error("enqueue: 待ち行列はフル状態です。");

  gQueue[QUEUE_SIZE-1-gQNum++] = x;
}

QUEUE_TYPE dequeue(void) {
  QUEUE_TYPE x;
  int i;

  if (isQueueEmpty())
    error("dequeue: 待ち行列は空状態です。");

  x = gQueue[QUEUE_SIZE-1];
  for (i = QUEUE_SIZE-1; i >QUEUE_SIZE-gQNum; i--){
    gQueue[i ] = gQueue[i-1];
  }
  gQNum--;
  return x;
}


void printQueue(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("QUEUE[");
  for (i = QUEUE_SIZE-1; i > QUEUE_SIZE-1-gQNum; i--) {
    printf("%d",  gQueue[i]);
    if (i != QUEUE_SIZE-gQNum) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}

int main(int argc, char *argv[]) {
  QUEUE_TYPE x, y;
  int i;

  if (argc < 2)
    error("main: 引数を指定してください。");

  initQueue();
  for (i = 1; i < argc; i++) {
    if (isQueueFull()) {
      y = dequeue();
      printf("%3d dequeue()", y);
      printArray(1);
      printQueue(1);
    }
    x = atoi(argv[i]);
    printf("enqueue(%d)", x);
    enqueue(x);
    printArray(1);
    printQueue(1);
  }
  printf("----------\n");
  while (!isQueueEmpty()) {
    y = dequeue();
    printf("%3d dequeue()", y);
    printArray(1);
    printQueue(1);
  }
  return 0;
}

void error(char *s) {
  fflush(stdout);
  fprintf(stderr, "\n%s\n", s);
  exit(1);
}

void initQueue(void) {
  gQNum = 0;
}

int isQueueEmpty(void) {
  return gQNum == 0;
}

int isQueueFull(void) {
  return gQNum == QUEUE_SIZE;
}

void printArray(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("Array[");
  for (i = 0; i < QUEUE_SIZE; i++) {
    printf("%3d",  gQueue[i]);
    if (i != QUEUE_SIZE - 1) printf(" ");
  }
  printf("] ");
}

