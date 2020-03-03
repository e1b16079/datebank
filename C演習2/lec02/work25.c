#include <stdio.h>

/* 大域変数の定義 */
int gData[100];                        /* 入力データの格納用配列 */
int gNum = 0;                        /* 入力データの個数 */

/*********** 次の行から修正しない       **********/
/* 標準入力よりデータを入力し，配列 gData に格納する */
int inputData(void) {
  int x;

  while (scanf("%d", &x) != EOF) { /* データを変数 x へ入力する */
    gData[gNum] = x;               /* 入力データを配列 gData に格納する */
    gNum++;
  }

  return 0;
}
/*********** ここまでの行は修正しない **********/

/* 関数原型宣言 */
int sum(void);
int calcmax(void);

int main(void) {
  int s, m;

  inputData();                  /* データを入力する */

  if (gNum > 0) {
    s = sum();                  /* sum 関数を呼び、合計を計算する */
    m = calcmax();
      
    printf("標本数 %3d 合計 %3d 最大値 %3d\n", gNum, s, gData[m]);
  }

 return 0;
}

/* 入力データの合計を計算する */
int sum(void) {
  int i, s = 0;
  
  for (i = 0; i < gNum; i++) {
    s = s + gData[i];
  }

  return s;
}
int calcmax(void){
 int max=0, i;
  for(i=0;i<gNum;i++){
   if(gData[i]>gData[max]){
    max=i;
   }
  }
 return max;
}

