#include <stdio.h>
#include <stdlib.h>
#include "list1.h"

int main(void) {
  /* セルの定義 */
  LIST_CELL c0 = {5, NULL};
  LIST_CELL c1 = {1, NULL};
  LIST_CELL c2 = {9, NULL};
  LIST_CELL c3 = {4, NULL};

  insert(&gFront, &c0);
  printList(0);

  insert(&gFront, &c1);
  printList(0);

  insert(&c0, &c2);
  printList(0);

  insert(&c1, &c3);
  printList(0);
  return 0;
}

