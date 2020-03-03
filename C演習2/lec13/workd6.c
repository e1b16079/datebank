#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

#define TRUE    1
#define FALSE   0

int main(int argc, char *argv[]) {
  LIST_CELL *p1, *pre,*new;
  LIST_TYPE x;
  int i, found;

  if (argc < 2)
    error("main: 引数を指定してください。");
  
  for (i = 1; i < argc; i++) {
    /* プログラム引数の i 番目の整数 x を処理する。*/
    x = atoi(argv[i]);

    found = FALSE;
    /* x と等しい値のセルを探す。*/
    pre = &gFront;
    for (p1 = gFront.next; p1 != NULL; p1 = p1->next) {
      /* x と等しい値のセルがあれば、foundをTRUEにして連結リストのたどりをやめる。*/
    if(x==p1->value){
     found = TRUE;
     break;
     }
      /* セル p1 の前のセルを指すポインタ pre を変更する。*/
      pre = p1;
    }

    /* x と等しい値のセルがなければ、末尾に値 x のセルを追加する。*/
    if (found == FALSE) {
      new = insert(pre,x);
      printf("insert(%d)",new->value);
      printList(1);
    }

  }
  return 0;
}

