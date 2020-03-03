#include <stdio.h>

/* 関数原型宣言を次に書きます */
int aaa(int x);
double bbb(double x);
void ccc(int x);

int main(void) {
  int a = 5, c = 7, x;
  double b = 7.5, y;

  x = aaa(a);
  y = bbb(b);
  ccc(c);

  printf("%d %.2f\n", x, y);

  return 0;
}

int aaa(int x) {
  return x/2;
}

double bbb(double x) {
  return x/2.0;
}

void ccc(int x) {
  x = x/2;
}

