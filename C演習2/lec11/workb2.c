#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double z = 0;
  double x = 0;
  double *py = NULL;

  if (argc != 3) {
    fprintf(stderr, "引数を2個指定してください。\n");
    exit(1);
  }
  py = malloc(sizeof(double));
  if (py == NULL) {
  fprintf(stderr, "メモリが足りません。\n");
  exit(1);
  }
  
  x = atof(argv[1]);
  *py = atof(argv[2]);
  z = (x + *py)/2;

  printf("%.2f と %.2f の平均は %.2f です。\n", x, *py, z);
  free(py);
  return 0;
}

