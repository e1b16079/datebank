#include <stdio.h>
#include <stdlib.h>

void powerPrint(int x, int n){

  if(n>1){
    printf("%2d",x);
    powerPrint(x,n-1);
  }
  else{
  printf("%2d",x);
  }


}

int main(int argc, char *argv[]) {
  int val, num;

  if ( argc != 3 ) {
    fprintf(stderr, "main: 引数を２つ指定してください。\n");
    exit(1);
  }
  
  val = atoi(argv[1]);
  num = atoi(argv[2]);

  if (val <= 0 || num <= 0)  {
    fprintf(stderr, "引数 %d または %d が正整数ではありません。\n", val, num);
    exit(1);
  }

  powerPrint(val, num);

  printf("\n");
  return 0;
}

