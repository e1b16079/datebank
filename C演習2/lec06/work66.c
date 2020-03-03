#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(int argc, char *argv[]) {
  int i;
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

  for (j = listLength()-1; j >=0 ; j--) {
    x = retrieve(j);
      if (x % 2==1) {
        delete(j);
        printf("delete(%d) %d" , j, x); printList(1);
      }
  }
  printf("処理データ");
  printList(1);
  return 0;
}
