#include <stdio.h>
#include <math.h>

struct point {
  int x;              /* 点の x 座標 */
  int y;              /* 点の y 座標 */
};

typedef struct point POINT;

void distance2(POINT p1, POINT p2, double *d){
   double x,y,ab;
  x=p2.x-p1.x;
  y=p2.y-p1.y;
  ab=pow(x,2)+pow(y,2);

  *d = sqrt(ab);


}

int main(void) {
  POINT  pt1, pt2;
  double d;

  printf("> (x1, y1) ");
  scanf("%d %d", &pt1.x, &pt1.y);

  printf("> (x2, y2) ");
  scanf("%d %d", &pt2.x, &pt2.y);


  distance2(pt1,pt2,&d);
  printf("(%d, %d)から(%d, %d)までの距離は %.2f です。\n", pt1.x, pt1.y, pt2.x, pt2.y, d);

  return 0;
}

