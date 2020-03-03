#include <stdio.h>
#include <stdlib.h>
#include "list3.h"

int main(void) {
  LIST_CELL *c0, *c1, *c2, *c3, *c4;
  LIST_TYPE val;

  /* 連結リストの作成 */
  c0 = insert(&gFront, 5);
  c1 = insert(c0, 8);
  c2 = insert(c1, 9);
  c3 = insert(c2, 6);
  c4 = insert(c3, 7);
  
  printf("初期データ");
  printList(3);
  printf("--------------------\n");

/***** 以降の行を変更する *****/

  val = delete(c1);
  printf("途中の %d の次の %d を削除", c1->value, val);
  printList(1);

  val = delete(c0);
  printf("途中の %d の次の %d を削除", c0->value, val);
  printList(1);

  val = delete(&gFront);
  printf("先頭の %d を削除", val);
  printList(3);

  val = delete(c3);
  printf("末尾の %d を削除", val);
  printList(3);

  val = delete(&gFront);
  printf("先頭の %d を削除", val);
  printList(3);


/***** ここまでの行を変更する *****/

  return 0;
}

