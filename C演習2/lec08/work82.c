#include <stdio.h>
#include <stdlib.h>

#define  ARRAY_SIZE 10

int main(int argc, char *argv[]) {
  int  data[ARRAY_SIZE];
  int  i, num;
  int  x, sum = 0;

/* (1) ポインタ p1 を宣言します。初期値は配列の先頭要素のアドレスとします。*/
  int *p1 = data;

  num = argc - 1;
  if (num <= 0 || num > ARRAY_SIZE) {
    fprintf(stderr, "引数の個数 %d が誤っています。\n", num);
    exit(1);
  }

  for (i = 0; i < num; i++) {
    x = atoi(argv[i + 1]); 

    /* (2) 次の代入文を、配列 data と添字 i の代わりにポインタ p1 を使うように修正します。*/ 
    *p1 = x;
    p1++;
  }

  /* (3) 変数 i を使う次の for 文を、ポインタ p1 を使う for 文に変更します。*/
  for (p1 = data; p1 < data + num; p1++) {
    sum += *p1;
  }

  printf("平均値 %.2f\n", (double)sum/num);

  return 0;
}

