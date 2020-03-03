#include <stdio.h>
#include <stdlib.h>

typedef int POSITION;           /* 位置を示す値の型 */

typedef int LIST_TYPE;          /* 格納データの型 */
#define LIST_SIZE 5             /* 格納データの最大個数 */

LIST_TYPE gList[LIST_SIZE];     /* データ格納用の配列 */
int gLNum = 0;                  /* 格納データの個数 */

void error(char *s);
void initList(void);
int isListEmpty(void);
int isListFull(void);
int listLength(void);
void insert(POSITION n, LIST_TYPE x);
void append(LIST_TYPE x);
LIST_TYPE retrieve(POSITION n);
LIST_TYPE replace(POSITION n, LIST_TYPE new);
void printList(int tabs);
double average(void);

int main(int argc, char *argv[]) {
  int i;
  double ave;
  POSITION j;
  LIST_TYPE x;

  if (argc < 2)
    error("main: 引数を指定してください。");

  initList();
  for (i = 1; i < argc; i++) {
    if (isListFull())
      error("main: リストはフル状態です。");

    x = atoi(argv[i]);
    append(x);
  }
  printf("入力データ    ");
  printList(0);
  ave=average();
  printf("平均値 %.2f\n",ave);
  printf("--------\n");
  
  for (j = 0; j < listLength(); j++) {
    if (retrieve(j) >=ave)
      replace(j, retrieve(j) / 2);
  }
  printf("処理データ    ");
  printList(0);
  printf("平均値 %.2f\n",average());
  return 0;
}


double average(void){
  int i;
  double sum=0;
   for (i = 0; i < listLength(); i++) {
    sum=sum+retrieve(i);
   }
 return sum/listLength();
}

void error(char *s) {
  fflush(stdout);
  fprintf(stderr, "\n%s\n", s);
  exit(1);
}

void initList(void) {
  gLNum = 0;
}

int isListEmpty(void) {
  return gLNum == 0;
}

int isListFull(void) {
  return gLNum == LIST_SIZE;
}

int listLength(void) {
  return gLNum;
}

void insert(POSITION n, LIST_TYPE x) {
  POSITION i;

  if (isListFull() || isListEmpty())
    error("insert: リストは通常状態ではありません。");

  if (n < 0 || n >= gLNum)
    error("insert: 位置が誤ってます。");

  for (i = gLNum - 1; i >= n; i--)
    gList[i + 1] = gList[i];
  gList[n] = x;
  gLNum++;
}

void append(LIST_TYPE x) {
  if (isListFull())
    error("append: リストはフル状態です。");

  gList[gLNum++] = x;
}

void printList(int tabs) {
  POSITION i;

  for (; 0 < tabs; tabs--) printf("\t");
  printf("LIST[");
  for (i = 0; i < gLNum; i++) {
    printf("%d", gList[i]);
    if (i != gLNum - 1) printf(" ");
  }
  printf("]\n");  fflush(stdout);
}

LIST_TYPE retrieve(POSITION n) {
  if (isListEmpty())
    error("retrieve: リストは空状態です。");

  if (n < 0 || n >= gLNum)
    error("retrieve: 位置が誤ってます。");

  return gList[n];
}

LIST_TYPE replace(POSITION n, LIST_TYPE new) {
  LIST_TYPE old;

  if (isListEmpty())
    error("replace: リストは空状態です。");

  if (n < 0 || n >= gLNum)
    error("replace: 位置が誤ってます。");

  old = gList[n];
  gList[n] = new;
  return old;
}

