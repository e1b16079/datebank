#include <stdio.h>
#include <stdlib.h>
#include "list1.h"

int main(void) {
  /* セルの定義 */
  LIST_CELL c0 = {5, NULL};
  LIST_CELL c1 = {8, NULL};
  LIST_CELL c2 = {9, NULL};
  LIST_CELL c3 = {6, NULL};
  LIST_CELL c4 = {7, NULL};

  /* 連結リストの作成 */
  gFront.next = &c0;
  c0.next = &c1;
  c1.next = &c2;
  c2.next = &c3;
  c3.next = &c4;

  printf("初期データ");
  printList(3);
  printf("--------------------\n");

/***** 以降の行を変更する *****/

  printf("途中の %d の次の %d を削除", c1.value, c2.value);
  c1.next = c2.next;
  printList(1);

  printf("途中の %d の次の %d を削除", c0.value, c1.value);
  c0.next = c1.next;
  printList(1);

  printf("先頭の %d を削除", c0.value);
  gFront.next = c0.next;
  printList(3);

  printf("末尾の %d を削除", c4.value);
  c3.next = c4.next;
  printList(3);

  printf("先頭の %d を削除", c3.value);
  gFront.next = c3.next;
  printList(3);


/***** ここまでの行を変更する *****/

  return 0;
}

