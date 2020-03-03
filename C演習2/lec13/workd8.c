#include <stdio.h>
#include <stdlib.h>
#include "list3.h"

int removeFirstValue(LIST_TYPE x){
 LIST_CELL *pre, *p1;
 LIST_TYPE val=0;
 int cnt=0;
pre = &gFront;
  p1 = gFront.next; 
 
  while (p1 != NULL) {
    if (p1->value == x) {
      val = delete(pre);
    pre = &gFront;
    p1 = gFront.next;
    cnt++;
    } else {
      pre = p1;
      p1 = p1->next;  /* 次のセルへ進める */
    }
  }return cnt;
}

int main(int argc, char *argv[]) {
  int n1, end, c;
  
  n1 = inputList(&argv[1], argc - 1);
  end = atoi(argv[n1 + 2]);
  
  if (n1 < 1) 
    error("main: 引数を指定してください。");
  printf("入力データ");  printList(1);

  printf("removeFirstValue(%d)\n", end);
  c = removeFirstValue(end);

  printf("値 %d のセルを %d 個削除しました。\n",end ,c);
  printf("実行後"); printList(2);
  return 0;
}

