#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5          /* 格納データの最大個数 */
typedef int QUEUE_TYPE;       /* 格納データの型 */

QUEUE_TYPE gQueue[QUEUE_SIZE + 1]; /* データ格納用の配列 */
int gQFront = 0;              /* 待ち行列の先頭の位置 */
int gQRear = 0;               /* 待ち行列の末尾の次の位置 */

void error(char *s);
void initQueue(void);
int isQueueEmpty(void);
int isQueueFull(void);
int queueNext(int n);
void enqueue(QUEUE_TYPE x);
QUEUE_TYPE dequeue(void);
void printQueue(int tabs);
void printArray(int tabs);

/* queueLength 関数だけを修正します。*/
int queueLength(void) {
   int x;
   if(gQRear-gQFront>=0){
    x=gQRear-gQFront;
   }
   else{
    x=6+(gQRear-gQFront);
   }
   return x;
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
      printf("%3d dequeue()\t%d", y, queueLength());
      printArray(1);
      printQueue(1);
    }
    x = atoi(argv[i]);
    enqueue(x);
    printf("enqueue(%d)\t%d", x, queueLength());
    printArray(1);
    printQueue(1);
  }
  printf("----------\n");
  while (!isQueueEmpty()) {
    y = dequeue();
    printf("%3d dequeue()\t%d", y, queueLength());
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
  gQFront = 0;
  gQRear = 0;
}

int isQueueEmpty(void) {
  return gQFront == gQRear;
}

int isQueueFull(void) {
  return queueNext(gQRear) == gQFront;
}

int queueNext(int n) {
  return (n + 1) % (QUEUE_SIZE + 1);
}

void enqueue(QUEUE_TYPE x) {
  if (isQueueFull())
    error("enqueue: 待ち行列はフル状態です。");

  gQueue[gQRear] = x;
  gQRear = queueNext(gQRear);
}

QUEUE_TYPE dequeue(void) {
  QUEUE_TYPE x;

  if (isQueueEmpty())
    error("dequeue: 待ち行列は空状態です。");

  x = gQueue[gQFront];
  gQFront = queueNext(gQFront);
  return x;
}

void printQueue(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("QUEUE[");
  for (i = gQFront; i != gQRear; i = queueNext(i)) {
    printf("%d", gQueue[i]);
    if (queueNext(i) != gQRear) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}

void printArray(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("Array[");
  for (i = 0; i <= QUEUE_SIZE; i++) {
    printf("%3d",  gQueue[i]);
    if (i != QUEUE_SIZE ) printf(" ");
  }
  printf("] ");
}

