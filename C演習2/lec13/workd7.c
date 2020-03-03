#include <stdio.h>
#include <stdlib.h>
#include "list3.h"

void removeFirstValue(LIST_TYPE x){
 LIST_CELL *pre, *p1;
 LIST_TYPE val;

pre = &gFront;
  p1 = gFront.next; 
  while (p1 != NULL) {
    if (p1->value == x) {
      val = delete(pre);
      printf("removeFirstValue(%d)\n", val);
      break;
    } else {
      pre = p1;
      p1 = p1->next;  /* 次のセルへ進める */
    }
  }
}

int main(int argc, char *argv[]) {
  int n1, end;
  
  n1 = inputList(&argv[1], argc - 1);
  end = atoi(argv[n1 + 2]);
  
  if (n1 < 1) 
    error("main: 引数を指定してください。");
  printf("入力データ");  printList(1);

  removeFirstValue(end);

  printf("実行後"); printList(2);
  return 0;
}

