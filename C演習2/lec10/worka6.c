#include <stdio.h>

int shou(int *xr, int *yr) {
  return *xr / *yr;
}

void amari(int x, int y, int *r) {
  *r = x % y;
}

int main(void) {
  int X, Y, S, A;

  while (scanf("%d %d", &X, &Y) != EOF) {

    S = shou(&X, &Y);
    amari(X, Y,&A);

    printf("%3d を %3d で割ったとき、商 %2d で余り %2d\n", X, Y, S, A);

  }

  return 0;
}

