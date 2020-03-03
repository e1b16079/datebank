#include <stdio.h>
#include <stdlib.h>

double pget(double *p){
  /* (1) ポインタ p が指している変数の値を返す */

  return *p;
}

void pset(double *p, double v){
  /* (2) ポインタ p が指している変数に値 v を代入する */

  *p=v;
}

void pprintAB(double *px, double *py){
  /* ポインタ px と py が指す変数の値を小数点以下２桁まで出力する */
  printf("aa = %.2f\n", *px);
  printf("bb = %.2f\n", *py);

}

int main(void) {
  double aa = 46.78;
  double bb = 32.91;
  double cc = 0;

  /* (3) ポインタ p1 とp2 を宣言する。初期値はそれぞれ aa と bb のアドレス。 */
  double *p1=&aa;
  double *p2=&bb;

  /* (4) pprintAB関数を使って、ポインタ p1 とp2 が指す値を出力する */
  pprintAB(p1,p2);

  /* (5) 次の行の右辺を、ポインタ p1、p2と、pget 関数を使うように修正する。*/
  cc = pget(p1) -pget(p2) ;

  /* (6) 次の行をポインタ p1 と pset関数を使うように修正する。*/
  *p1 = pget(&cc);

  printf("----------\n");

  /* (7) pprintAB関数を使って、ポインタ p1 とp2 が指す値を出力する。(4)と同じ。 */
  pprintAB(p1,p2);

  return 0;
}

