#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

int main(void) {
  /* セルの定義 */
  LIST_CELL *c1 = NULL;  /*  77 を格納するセルへのポインタ */
  LIST_CELL *c2 = NULL;  /*  22 を格納するセルへのポインタ */
  LIST_CELL *c3 = NULL;  /*  33 を格納するセルへのポインタ */
  LIST_CELL *c4 = NULL;  /*  44 を格納するセルへのポインタ */
  LIST_CELL *c5 = NULL;  /*  55 を格納するセルへのポインタ */

  /* 55 を先頭に追加する。c5 になります。*/
  /**** c5 = insert(&gFront, 55); ****/
  c5 = malloc(sizeof(LIST_CELL));
  if (c5 == NULL)
    error("メモリが足りません。");

  c5->value = 55;
  c5->next = gFront.next;
  gFront.next = c5;

  printList(0);

/***** 以降の行を変更する *****/

  /* 77 を挿入する。c1 になります。*/

  c1 = malloc(sizeof(LIST_CELL));
  if (c1 == NULL)
    error("メモリが足りません。");

  c1->value = 77;
  c1->next = c5->next;
  c5->next = c1;

/***** ここまでの行を変更する *****/

  printList(0);

  /* 33 を挿入する。c3 になります。*/
  c3 = insert(&gFront, 33);
  printList(0);

  /* 22 を挿入する。c2 になります。*/
  c2 = insert(c3, 22);
  printList(0);

  /* 44 を挿入する。c4 になります。*/
  c4 = insert(c1, 44);
  printList(0);

  return 0;
}

