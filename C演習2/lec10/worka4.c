#include <stdio.h>

struct point {
  int x;        /* 点の x 座標 */
  int y;        /* 点の y 座標 */
};

typedef struct point POINT;

void getMiddlePoint(POINT p1, POINT p2, POINT *p3) {
  

  p3->x = (p1.x+p2.x)/2;  
  p3->y = (p1.y+p2.y)/2;

}

int main(void) {
  POINT pt1;             /* 移動する前の座標 */
  POINT pt2;             /* 移動した後の座標 */
  POINT pt3;
  
  
  printf("> (x1, y1) ");
  scanf("%d %d", &pt1.x, &pt1.y);
        
  printf("> (x2, y2) ");
  scanf("%d %d", &pt2.x, &pt2.y);

  getMiddlePoint(pt1,pt2,&pt3);

  printf("(%d, %d)と(%d, %d)の中点は(%d, %d)です。\n",pt1.x, pt1.y, pt2.x, pt2.y, pt3.x, pt3.y);
  return 0;
}

