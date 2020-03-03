#include <stdio.h>
#include <stdlib.h>

typedef int LIST_TYPE;       /* 格納データの型 */

/* (1) 連結リストのメンバーを書きます。 */
struct cell {
  LIST_TYPE value;                             /* セルの値 */
  struct cell *next;                           /* 次のセルのアドレス */
};
typedef struct cell LIST_CELL;

LIST_CELL gFront = {-1, NULL};

void printList(int tabs) {
  LIST_CELL *p1;
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("LIST[");
  for (p1 = gFront.next; p1 != NULL; p1 = p1->next) {
    printf("%d", p1->value);
    if (p1->next != NULL) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}

int main(void) {
  /* セルの定義 */
  LIST_CELL c0 = {5, NULL};
  LIST_CELL c1 = {1, NULL};
  LIST_CELL c2 = {9, NULL};

/* (2) 値が 7 のセル c3 の定義を追加する。*/
  LIST_CELL c3 = {7, NULL};


/* (3) LIST[5 1 7 9]という連結リストを作成ように修正する。*/
  gFront.next = &c0;
  c0.next = &c1;
  c1.next = &c2;
  c3.next = &c2;
  c1.next = &c3;
  printList(0);

  printf("つなぎ方を変えて、異なる連結リストを作ります。\n");

/* (4) LIST[9 1 7 5]という連結リストを作成するコードを追加する。*/
  gFront.next = &c2;
  c2.next = &c1;
  c3.next = &c0;


/* (5) 連結リストの末尾のセルのメンバ next を NULL にする。 */

  c0.next = NULL;

/***** 以降は変更しない。*****/  
  printList(0);

  return 0;
}

