#include <stdio.h>
#include <stdlib.h>
#include "toukei.h"

#define MAX_NUM 20              /* 数値の最大個数 */

double gData[MAX_NUM];          /* 数値の格納用 */
int gNum = 0;                   /* 数値の個数 */

/* 標準入力よりデータを入力し，配列 gData に格納する。 */
int inputData(void) {
  double x;

  while (scanf("%lf", &x) != EOF) {
    if (gNum >= MAX_NUM) {
      fprintf(stderr, "入力できるデータの個数は %d 個までです。\n", MAX_NUM);
      return 1;
    }
    gData[gNum] = x;           /* 入力データを配列 gData に格納する。 */
    gNum++;
  }
  return 0;
}

/* データの個数を返す */
int getNum(void) {
  return gNum;
}

/* データの合計を計算する */
double sum(void) {
  int i;
  double s = 0;

  for (i = 0; i < gNum; i++) {
    s += gData[i];
  }
  return s;
}

/* エラーメッセージを出力する */
void error(char *s) {
  fflush(stdout);
  fprintf(stderr, "\n%s\n", s);
  exit(1);
}
