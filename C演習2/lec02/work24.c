#include <stdio.h>
double faa(double x, double y);

int main(void) {
  double a = 2.3;
  double b = 7.5;
  double y;
  int x;

  x = goo((int)a, (int)b);

  y = faa(a, b);

  printf("%d %.2f\n", x, y);
  return 0;
}

int goo(int x, int y) {
  return (x * y)/2;
}

double faa(double x, double y) {
  return (x * y)/2.0;
}

