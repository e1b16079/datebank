#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list2.h"

LIST_CELL gFront = {-1, NULL};

void error(char *msg) {
  fflush(stdout);
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

void printList(int tabs) {
  LIST_CELL *p1;
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("LIST[");
  for (p1 = gFront.next; p1 != NULL; p1 = p1->next) {
    printf("%d", p1->value);
    if (p1->next != NULL) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}

int inputList(char *str[], int len) {
  LIST_CELL *last;      /* 末尾のセルを指すポインタ */
  int x, i;

  for (last = &gFront; last->next != NULL; )
    last = last->next;

  for (i = 0; i < len; i++) {
    if (!strcmp(str[i], "--")) break;
    x = atoi(str[i]);
    insert(last, x);
    last = last->next;
  }
  return i;
}

LIST_CELL *insert(LIST_CELL *pre, LIST_TYPE val) {
  LIST_CELL *new;       /* 生成したセルを指すポインタ */

  if (pre == NULL)
    error("insert: 引数 pre がNULLです。");

  new = malloc(sizeof(LIST_CELL));
  if (new == NULL)
    error("insert: メモリが足りません。");

  new->value = val;       /* new に値 val を格納する */
  new->next = pre->next;  /* new を pre の次に挿入する */
  pre->next = new;
  return new;
}
