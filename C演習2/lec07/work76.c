#include <stdio.h>
#include <stdlib.h>
void setMaxMin(int *max, int *min){
  if(*max<*min){
  swap(&max,&min);
  }
 }

void swap(int *x, int *y) {
  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;
}

int main(int argc, char *argv[]) {
  int x, y;
  if(argc < 1){
    fprintf(stderr, "引数を指定してください。\n");
    exit(1);
  }
  x=atoi(argv[1]);
  y=atoi(argv[2]);

  setMaxMin(&x,&y);

  printf("大きい値  %d\n",x);
  printf("小さい値  %d\n",y);

  return 0;
}

