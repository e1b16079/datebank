#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

int main(int argc, char *argv[]) {
  LIST_CELL  *p1,*last;
  LIST_TYPE sum=0;
  int c,i,x;
  double ave;

  if (argc < 2)
    error("main: 引数を指定してください。");

   for (i = 1; i < argc; i++) {
    x= atoi(argv[i]);
    sum +=x;
   } 

    printf("入力データ");
  

  for (last = &gFront; last->next != NULL; )
    last = last->next;

  for (i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "--")) break;
    x = atoi(argv[i]);
    insert(last, x);
    last = last->next;
  }

 c=i;


    printList(1);
    
    ave = (double)sum/(c-1);
    printf("平均値 %.2f 以上の値は次です。\n",ave);

    for (p1 = gFront.next; p1 != NULL; p1 = p1->next) {
      if (p1->value >= ave){
      printf("%d ",p1->value);
    }
}

printf("\n");
  return 0;
}

