#include <stdio.h>
#include <stdlib.h>

/* POINT型の宣言 */
typedef struct point {
  int x;
  int y;
} POINT;

/* RECTANGLE型の宣言 */
typedef struct rectangle {
 int x;
 int y;
 int w;
 int h;

} RECTANGLE;

/* RECTANGLE型のデータを出力する。*/
void printRectangle(RECTANGLE *r1) {
  printf("RECTANGLE(%3d, %3d, %3d, %3d)",
         r1->x, r1->y, r1->w, r1->h);
}

/* x と y のうちの最小値を返す。*/
int min(int x, int y) {
  if (x > y)
    return y;
  return x;
}

/* 点 p1 と点 p2 を対角とする長方形を返す */
RECTANGLE *newRectangle(POINT p1, POINT p2) {
  RECTANGLE *r=NULL;

  r=malloc(sizeof(RECTANGLE));
if (r == NULL) {
  fprintf(stderr, "メモリが足りません。\n");
  exit(1);
  }

  r->x=min(p1.x,p2.x);  
  r->y=min(p1.y,p2.y);
  r->w=abs(p1.x-p2.x);
  r->h=abs(p1.y-p2.y);

  return r;
}

int main(void) {
  POINT p1, p2;
  RECTANGLE *r1;

  /* ２点を入力する */
  while (scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y) != EOF) {

    printf("(%3d, %3d) + (%3d, %3d)", p1.x, p1.y, p2.x, p2.y);
    printf(" => ");
    
    r1 = newRectangle(p1,p2);
    
    printRectangle(r1);
    printf("\n");




  }

  return 0;
}

