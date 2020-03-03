#include <stdio.h>
#include <stdlib.h>
#include "list3.h"

void removeFirstValue(LIST_TYPE x LIST_CELL *p){
 LIST_CELL *pre, *p1;
 LIST_TYPE val;

  pre = p;
  p1 = p->next; 
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
  int n1;
  LIST_CELL *pre, *p1;
  LIST_TYPE val=0;
  pre = &gFront;

  n1 = inputList(&argv[1], argc - 1);
  
  if (n1 < 1) 
    error("main: 引数を指定してください。");
  printf("入力データ");  printList(1);

 for(p1 = gFront.next;p1 != NULL;p1=p1->next)





  return 0;
}
