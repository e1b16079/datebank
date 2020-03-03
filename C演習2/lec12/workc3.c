#include <stdio.h>
#include <stdlib.h>

typedef int LIST_TYPE;       /* 格納データの型 */

struct cell {
  LIST_TYPE   value;         /* セルの値 */
  struct cell *next;         /* 次のセルのアドレス */
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
  LIST_CELL c3 = {4, NULL};

  printf("初期状態");
  printList(2);

  gFront.next = &c0;
  printf("%d を先頭に追加", c0.value);
  printList(2);

  c1.next = gFront.next;
  gFront.next = &c1;
  c0.next = NULL;
  printf("%d を先頭に挿入", c1.value);
  printList(2);

  c2.next = c1.next;
  c1.next = &c2;
  
  printf("%d を %d の次に挿入", c2.value, c1.value);
  printList(1);

  c0.next = &c3;
  printf("%d を %d の次に追加", c3.value, c0.value);
  printList(1);
  return 0;
}

