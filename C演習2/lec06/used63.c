#include "used63.h"

double a;
double b;

void setData(double x, double y) {
  a = x;
  b = y;
}

double ave(void) {
  return (a + b)/2;
}
