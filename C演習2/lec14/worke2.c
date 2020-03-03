#include <stdio.h>
#include <stdlib.h>

int power(int p, int n) {

  if(n==0){
   return 1;
  }
  else{
  return p*power(p,n-1);
  }


}

int main(int argc, char *argv[]) {
  int val, num, x = 0;

  if (argc != 3) {
    fprintf(stderr, "main: 引数を２つ指定してください。\n");
    exit(1);
  }
  
  val = atoi(argv[1]);
  num = atoi(argv[2]);

  if (val < 0 || num < 0) {
    fprintf(stderr, "main: 引数の %d または %d が非負整数ではありません。\n", val, num);
    exit(1);
  }

  x = power(val, num);
  printf("%d の %d 乗は %d です。\n", val, num, x);
  return 0;
}

