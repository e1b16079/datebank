#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

int main(void) {
  /* セルの定義 */
  LIST_CELL *c1 = NULL;  /*  11 を格納するセルへのポインタ */
  LIST_CELL *c2 = NULL;  /*  22 を格納するセルへのポインタ */
  LIST_CELL *c3 = NULL;  /*  33 を格納するセルへのポインタ */
  LIST_CELL *c4 = NULL;  /*  44 を格納するセルへのポインタ */
  LIST_CELL *c5 = NULL;  /*  55 を格納するセルへのポインタ */

  /* 55 を先頭に追加する。c5 になります。*/
    c5 = insert(&gFront, 55);
  printList(0);

  /* 11 を挿入する。c1 になります。*/
     c1 = insert(c5, 11);
  printList(0);

  /* 33 を挿入する。c3 になります。*/
    c3 = insert(&gFront, 33);
  printList(0);

  /* 22 を挿入する。c2 になりす。*/
     c2 = insert(c3, 22);
  printList(0);

  /* 44 を挿入する。c4 になります。*/
     c4= insert(c1, 44);
  printList(0);

  return 0;
}

