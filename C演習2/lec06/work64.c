#include <stdio.h>
#include <stdlib.h>
#include "toukei.h"

int main(void) {
  int n;
  double s;

  if (inputData() != 0) {
    return 1;
  }

  n = getNum();
  
  if ( n > 0 ) {
    s = sum();
    printf("個数 %d 合計 %.2f 平均値 %.2f\n", n, s, s/n);
  } else {
    error("入力データがありません。");
  }
  return 0;
}

