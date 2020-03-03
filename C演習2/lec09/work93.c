#include <stdio.h>
#include <math.h>

/* (1) 構造体型 point を宣言する */
 struct point{
  int x;
  int y;
 };

/* (2) distance関数： (x0, y0) と (x1, y1) の距離を計算する */

double distance(int x0, int y0, int x1, int y1){
  double x, y, ab;

  x=x1-x0;
  y=y1-y0;
  ab=pow(x,2)+pow(y,2);

  return ab=sqrt(ab);
}

int main(void) {
  double d;
  /* (3) 構造体型 point の変数 p1 と p2 を宣言する。*/
  struct point p1, p2;


/* ここから変更してはいけません。*/
  printf("> (x1, y1) ");
  scanf("%d %d", &p1.x, &p1.y);

  printf("> (x2, y2) ");
  scanf("%d %d", &p2.x, &p2.y);
/* ここまで変更してはいけません。*/

  /* (4) distance関数を使って２点の距離を計算して出力する。*/

  d = distance(p1.x,p1.y,p2.x,p2.y);
  printf("(%d, %d)から(%d, %d)までの距離は%.2fです。\n",p1.x, p1.y, p2.x, p2.y, d);

  return 0;
}

