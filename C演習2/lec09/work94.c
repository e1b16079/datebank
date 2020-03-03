#include <stdio.h>

/* 構造体型 point の宣言 */
struct point{
  int x;
  int y;
 };
 
int main(void) {
  struct point p1 = {3,2};              /* 秘密の点 p1 */
  struct point p2;                      /* 入力用の点 p2 */

  /* 次の while 文の条件を削除しています。 */
  while (scanf("%d %d", &p2.x, &p2.y) != EOF) {

    /* 次の if 文の条件を削除しています。*/
    if (p1.x==p2.x && p1.y==p2.y ) {
      printf("(%d, %d)はあたりです。\n", p2.x, p2.y);
      return 0;
    } else if(p1.x==p2.x) {
      printf("(%d, %d)はX 座標だけが同じです。\n", p2.x, p2.y);
    }
    else if(p1.y==p2.y){
     printf("(%d, %d)はY 座標だけが同じです。\n", p2.x, p2.y);
    }
    else{
     printf("(%d, %d)は違います。\n", p2.x, p2.y);
    }
  }
  printf("あたりはありません。\n");
  return 0;
}

