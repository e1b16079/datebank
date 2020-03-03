#include <stdio.h>

int main(void) {
  int x = 77;
  int *p = &x;

/* この後に変数 y と q の宣言を追加する。*/
  double y = 3.14;
  double *q = &y;
  printf("変数  アドレス  サイズ  値\n");
  printf("x     %p    %d     %d\n", &x, sizeof(x), x);
  printf("p     %p    %d     %p\n", &p, sizeof(p), p);
  printf("y     %p    %d     %f\n", &y, sizeof(y), y);
  printf("q     %p    %d     %p\n", &q, sizeof(q), q);
/* この後に変数 y と q の出力の printf 関数の呼び出しを追加する。*/

  return 0;
}

