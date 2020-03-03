#include <stdio.h>
#include <math.h>

/* 構造体型 point の宣言 */
struct point{
  int x;
  int y;
 };
 
double distance(int x0, int y0, int x1, int y1){
  double x, y, ab;

  x=x1-x0;
  y=y1-y0;
  ab=pow(x,2)+pow(y,2);

  return ab=sqrt(ab);
}


int main(void) {
  struct point p1 = {3, 2};     /* 秘密の点 */
  struct point p2 = {99, 99};   /* 新たに入力した点 */
  struct point p3 = {99, 99};   /* p2 の前に入力した点 */

  double d2;                    /* p2 と p1 との距離 */
  double d3;                    /* p3 と p1 との距離 */

  /* 次の while 文の条件を削除しています。 */
  while (scanf("%d %d", &p2.x, &p2.y) != EOF) {

    d2 = distance(p1.x,p1.y,p2.x,p2.y);
    d3 = distance(p1.x,p1.y,p3.x,p3.y);

    /* 次の if 文の条件を削除しています。*/
    if (p1.x==p2.x && p1.y==p2.y ) {
      printf("(%d, %d)はあたりです。\n", p2.x, p2.y);
      return 0;
    } else if(d2<d3){
       printf("入力した点(%d, %d) はその前の点(%d, %d)より秘密の点に近い。\n",p2.x, p2.y, p3.x, p3.y);
    }else{
       printf("入力した点(%d, %d) はその前の点(%d, %d)より秘密の点から遠い。\n",p2.x, p2.y, p3.x, p3.y);
    }
    p3=p2;
}
  printf("あたりはありません。\n");
  return 0;
}

