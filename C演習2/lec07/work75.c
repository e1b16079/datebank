#include <stdio.h>
#include <stdlib.h>

void padd(double *x, double d){
  *x = *x + d;
}

int main(int argc, char *argv[]) {
  double x;
  if(argc < 1){
    fprintf(stderr, "引数を指定してください。\n");
    exit(1);
  }

  x = atof(argv[1]);

  printf("padd(%.2f, %.2f)\n",x,atof(argv[2]));

  padd(&x,atof(argv[2]));

  printf("  ==> %.2f\n",x);
  return 0;
}

