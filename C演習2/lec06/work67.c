#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main(int argc, char *argv[]) {
  int i,old;
  POSITION j;
  LIST_TYPE x;

  if (argc < 2)
    error("main: 引数を指定してください。");

 printf("入力データ");
  initList();
  for (i = 1; i < argc; i++) {
    if (isListFull())
      error("main: リストはフル状態です。");

    x = atoi(argv[i]);
    append(x);
  }
  printList(1);

  if(listLength()%2==1){
   for(j=0;j<(listLength()-1)/2;j++){
   old = replace(j, retrieve(listLength()-1-j));
   replace(listLength()-1-j, old);
   }
  }
  else{
   for(j=0;j<listLength()/2;j++){
   old = replace(j, retrieve(listLength()-1-j));
   replace(listLength()-1-j, old);
   }
  }
 printf("処理データ");
  printList(1);
  return 0;
}
