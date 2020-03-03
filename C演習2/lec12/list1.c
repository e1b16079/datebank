#include <stdio.h>
#include <stdlib.h>
#include "list1.h"

LIST_CELL gFront = {-1, NULL};

void error(char *msg) {
  fflush(stdout);
  fprintf(stderr, "\n%s\n", msg);
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

void insert(LIST_CELL *pre, LIST_CELL *new) {
  if (pre == NULL || new == NULL)
    error("insert: 引数 pre または new がNULLです。");

  new->next = pre->next;
  pre->next = new;
}
