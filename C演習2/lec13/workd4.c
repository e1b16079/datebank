#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list3.h"

int main(void) {
  LIST_CELL *c0, *c1, *c2, *c3, *c4;
  LIST_CELL *del;
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

  /**** val = delete(&gFront); ****/
  del = gFront.next;
  val = del->value;
  gFront.next = del->next;
  memset(del, 0, sizeof(LIST_CELL));
  free(del);

  printf("先頭の %d を削除", val);
  printList(3);

/***** 以降の行を変更する *****/

  /**** val = delete(c1); ****/

  del = c1->next;
  val = del->value;
  c1->next = del->next;
  memset(del, 0, sizeof(LIST_CELL));
  free(del);

/***** ここまでの行を変更する *****/

  printf("途中の %d の次の %d を削除", c1->value, val);
  printList(1);

  val = delete(c3); 
  printf("途中の %d の次の %d を削除", c3->value, val);
  printList(1);

  val = delete(c1);
  printf("途中の %d の次の %d を削除", c1->value, val);
  printList(1);

  val = delete(&gFront);
  printf("先頭の %d を削除", val);
  printList(3);

  return 0;
}

