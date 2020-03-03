#include <stdio.h>

#include "used63.h"


int main(void) {
  double x;

  setData(2.3, 7.5);

  x = ave();

  printf("平均値 %.2f\n", x);

  return 0;
}

