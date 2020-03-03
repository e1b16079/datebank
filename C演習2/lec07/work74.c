#include <stdio.h>

int main(void) {
  int x = 77;
  int tmp;
  int y = 115;
  int *p = &tmp;

  
  printf("変数  アドレス  値\n");
  printf("x     %p  %d\n", &x, x);
  printf("y     %p  %d\n", &y, y);

  printf("\tx と y を交換\n");

  *p = x;
  x = y;
  y = *p;

  printf("x     %p  %d\n", &x, x);
  printf("y     %p  %d\n", &y, y);

  
  return 0;
}

