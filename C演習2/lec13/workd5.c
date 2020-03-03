#include <stdio.h>
#include <stdlib.h>
#include "list3.h"

int main(int argc, char *argv[]) {
  LIST_CELL *pre, *p1;
  int n1, start, end;

  n1 = inputList(&argv[1], argc - 1);
  if (n1 < 1 || argc - 1 - n1 != 3) {
  error("引数の指定法: 整数1 整数2 ... -- 開始 終了");
}
  printf("入力データ");  printList(1);

  start = atoi(argv[n1 + 2]);     /* プログラム引数の「開始」の値 */
  end = atoi(argv[n1 + 3]);       /* プログラム引数の「終了」の値 */


  pre = &gFront;
  p1 = gFront.next; 
  while (p1 != NULL) {
    if (start <= p1->value && p1->value <= end) {
      delete(pre);
      p1 = pre->next; /* p1がpreの次のセルを指すようにする */
    } else {
      pre = p1;
      p1 = p1->next;  /* 次のセルへ進める */
    }
  }
  printf("実行後"); printList(2);
  return 0;
}

