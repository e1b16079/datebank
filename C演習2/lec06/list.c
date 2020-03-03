#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#ifndef LIST_SIZE
  #define LIST_SIZE 5           /* 格納データの最大個数のデフォルト値 */
#endif

LIST_TYPE gList[LIST_SIZE];     /* データ格納用の配列 */
int gLNum = 0;                  /* 格納データの個数 */

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

LIST_TYPE delete(POSITION n) {
  POSITION i;
  LIST_TYPE del;

  if (isListEmpty())
    error("delete: リストは空状態です。");
  if (n < 0 || n >= gLNum)
    error("delete: 位置が誤ってます。");

  del = gList[n];
  for (i = n; i < gLNum - 1; i++)
    gList[i] = gList[i + 1];
  gLNum--;
  return del;
}

void printList(int tabs) {
  POSITION i;

  for (; 0 < tabs; tabs--) printf("\t");
  printf("LIST[");
  for (i = 0; i < gLNum; i++) {
    printf("%d", gList[i]);
    if (i != gLNum - 1) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}


