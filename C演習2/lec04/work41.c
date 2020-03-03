#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 10              /* 配列の大きさ */

int gData[MAX_NUM];             /* 入力データの格納用配列 */
int gNum = 0;                   /* 入力データの個数 */

void error(char *s) {
  fflush(stdout);
  fprintf(stderr,"\n%s\n",s);
  exit(1);
}

int main(int argc, char *argv[]) {
  int i, sum = 0;

  gNum = argc - 1;

  printf("プログラム引数の個数は%d個です。\n", gNum);

  if (gNum == 0) {
    error("プログラム引数が指定されていません。");
  }

  if (gNum >= 11) {
    error("プログラム引数が11個以上指定されています。");
  }
  
  for (i = 1; i <= gNum; i++) {
    gData[i - 1] = atoi(argv[i]); /* プログラム引数の整数を配列gDataに格納する */
  }

  for (i = 1; i <= gNum; i++) {
    sum = sum + gData[i - 1];
  }

  printf("個数 %d 平均値 %.2f\n", gNum, (double)sum/gNum);

  return 0;
}

