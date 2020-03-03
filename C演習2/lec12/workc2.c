#include <stdio.h>
#include <stdlib.h>

typedef int LIST_TYPE;       /* 格納データの型 */

/* (1) 連結リストのメンバーを書きます。 */
struct cell {
  LIST_TYPE value;                           /* セルの値 */
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
  LIST_CELL *p1;
  LIST_TYPE sum = 0;

/* (2) 値が 7 のセル c3 を追加する。*/
  LIST_CELL c3 = {7, NULL};

/* (3) LIST[9 1 7 5]という連結リストを作成する。*/
  gFront.next = &c2;
  c2.next = &c1;

  c1.next = &c3;
  c3.next = &c0;

  printList(0);

  printf("p1の値          p1->nextの値     p1->valueの値\n");

/* (4) for 文を完成し、連結リストのセルの情報を出力する処理を書きます。*/

  for (p1 = gFront.next; p1 != NULL; p1 = p1->next) {
    sum += p1->value;
   printf("%p          %p          %d\n",(void *)p1 ,(void *)p1->next, p1->value);
  }

/* 以降は修正しません。*/

  printf("セルの値の合計は %d です。\n", sum);
  return 0;
}

