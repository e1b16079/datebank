#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* POINT 型の宣言 */
typedef struct point {
  int x;        /* 点の x 座標 */
  int y;        /* 点の y 座標 */
} POINT;

int main(int argc, char *argv[]) {
  /* 変数名を変更したり，新たに変数を追加してはいけません。*/
  double d;

  /*** (1) アドレスをp1に代入するために、p1の型をPOINT *に変更する。
     また、p1の初期値をにする。*/
  POINT *p1 = NULL;

  /*** ここまで修正します。*/
  if (argc != 3) {
    fprintf(stderr, "引数を2個指定してください。\n");
    exit(1);
  }

  /*** (2) POINT型のメモリ領域をmalloc関数で確保し、p1に代入する処理を追加する。*/
  p1=malloc(sizeof(POINT));

  /*** (3) メモリ領域を確保できなかったときのエラー処理を追加する。*/
  if (p1 == NULL) {
  fprintf(stderr, "メモリが足りません。\n");
  exit(1);
  }



  /*** (4) p1の型の変更に合わせて、以降でp1を使用している部分を書き換える。*/
  p1->x = atoi(argv[1]);
  p1->y = atoi(argv[2]);

  d = sqrt(pow(p1->x, 2) + pow(p1->y, 2));

  printf("(%d, %d)から原点までの距離は %.2f です。\n", p1->x, p1->y, d);

  /*** (5) p1が指すメモリ領域を解放するコードを追加する。*/
  free(p1);

  return 0;
}

