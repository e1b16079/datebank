#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 5

int gData[DATA_SIZE];

/* 関数原型宣言 */
void printArray(void);

int main(int argc, char *argv[]) {
  int i;
  int start;                    /* 配列 gData の開始位置 */
  int index;                    /* 配列 gData の代入位置 */

  /* プログラム引数の値を開始位置 start とする */
  start = atoi(argv[1]);

  /*　配列gDataの適切な開始位置startより適切な位置indexに5から10刻み値を代入する　*/
  for (i = 0; i < DATA_SIZE; i++) {
    /* ここから修正します */
   index=(start+i)%5;
   gData[index]=i*10+5;


    /* ここまで修正します。 */
  }

  printArray();
  return 0;
}

/*　以降は変更しないこと　*/
void printArray(void) {
  int i;
  printf("      i ");
  for (i = 0 ; i < DATA_SIZE; i++) {
    printf("%4d", i);
  }
  printf("\n");

  printf("gData[i]");
  for (i = 0 ; i < DATA_SIZE; i++) {
    printf("%4d", gData[i]);
  }
  printf("\n");
}

