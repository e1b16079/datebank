#include <stdio.h>

typedef struct point {
  int x;        /* 点の x 座標 */
  int y;        /* 点の y 座標 */
} POINT;

/* 局所変数を使った書き方 */
POINT *getMiddlePoint(POINT p1, POINT p2) {
  POINT *p3=NULL;

  p3=malloc(sizeof(POINT));
if (p3 == NULL) {
  fprintf(stderr, "メモリが足りません。\n");
  exit(1);
  }

  p3->x = (p1.x + p2.x)/2;
  p3->y = (p1.y + p2.y)/2;

  return p3;
}

int main(void) {
  POINT pt1, pt2;       /* 入力する2つの点 */
  POINT *m1;             /* 中点 */
  
  printf("> (x1, y1) ");
  scanf("%d %d", &pt1.x, &pt1.y);

  printf("> (x2, y2) ");
  scanf("%d %d", &pt2.x, &pt2.y);

  m1 = getMiddlePoint(pt1, pt2);
  printf("(%d, %d)と(%d, %d)の中点は(%d, %d)です。\n",
         pt1.x, pt1.y, pt2.x, pt2.y, m1->x, m1->y);

free(m1);

  return 0;
}

