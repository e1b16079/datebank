#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

int main(int argc, char *argv[]) {
  LIST_CELL *pre, *p1, *new;
  LIST_TYPE x;
  int i;

  if (argc < 2)
    error("main: 引数を指定してください。");

  for (i = 1; i < argc; i++) {
    x = atoi(argv[i]);
    pre = &gFront;
    for (p1 = gFront.next; p1 != NULL; p1 = p1->next) {
      if (abs(50-p1->value) > abs(50-x)) break;
      pre = p1;
    }

    new = insert(pre, x);

    printList(0);
  }
  return 0;
}

