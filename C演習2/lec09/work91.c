#include <stdio.h>
#include <stdlib.h>

void pround(double *x) {
  double a= (*x) +0.5;
  
  *x=(int)a;
}

int main(int argc, char *argv[]) {
  double b, x;

  if (argc < 2) {
    fprintf(stderr, "引数を指定してください。\n");
    exit(1);
  }

  x = atof(argv[1]);
  b = x;
  pround(&x);
  printf("%.2f %.2f\n",b,x);
  return 0;
}

