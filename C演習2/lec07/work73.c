#include <stdio.h>

int main(void) {
  int    x = 77;
  double y = 3.14 ;

  /* (1) int  へのポインタ p を宣言します。*/
  int *p          ;

  /* (2) doubleへのポインタ q を宣言します。*/
  double  *q      ;

  /* (3) ポインタ p に変数 x のアドレスを代入します。*/
  p = &x          ;

  /* (4) ポインタ q に変数 y のアドレスを代入します。*/
  q = &y          ;

  printf("変数  アドレス          値               間接参照の値\n");
  printf("x     %p    %d       \n",     &x,     x);
  printf("p     %p    %p     %d\n",     &p,     p,      *p);

  /* (5) 変数 y とポインタ q だけを使って実行例のように出力します。*/
  printf("y     %p    %.2f     \n",&y       , y     );
  printf("q     %p    %p   %.2f\n",&q       , q     , *q       );

  /* (6) ポインタ p と q が指す変数の値の和を変数 x に代入します。*/
  x = *p + *q;

  printf("----------------------------------\n");
  printf("変数  アドレス          値               間接参照の値\n");
  printf("x     %p    %d       \n",     &x,     x);
  printf("p     %p    %p     %d\n",     &p,     p,      *p);

  /* (7) 変数 y とポインタ q だけを使って実行例のように出力します。(5)と同じ。*/
  printf("y     %p    %.2f     \n",     &y  ,    y  );
  printf("q     %p    %p   %.2f\n",     &q  ,     q ,      *q  );

  return 0;
}

