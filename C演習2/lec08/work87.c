#include <stdio.h>
#include <stdlib.h>

#define  ARRAY_SIZE 10

void replaceData(int seq1[], int n, int x, int y) {

/***** ここから修正します。*****/ 
int *p1;

  for(p1=seq1;p1<seq1 + n;p1++){
    if(*p1==x){
    *p1=y;
    }
  }

/***** ここまで修正します。*****/

}

void printData(int seq1[], int n) {
  int *p1;

  for (p1 = seq1; p1 < seq1 + n; p1++) {
    printf("%2d ", *p1);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int data[ARRAY_SIZE];
  int i, num, OLD, NEW;

  num = argc - 1;
  if (num < 3 || num > ARRAY_SIZE + 2) {
    fprintf(stderr, "引数の個数 %d が誤っています。\n", num);
    exit(1);
  }

  OLD = atoi(argv[1]);
  NEW = atoi(argv[2]);

  /* プログラム引数の「整数の列を配列 data に格納します */
  num = num - 2;
  for (i = 0; i < num; i++)
    data[i] = atoi(argv[i + 3]);

  printData(data, num);

/***** ここから修正します。*****/ 

  replaceData(data, num, OLD, NEW);

/***** ここまで修正します。*****/

  printData(data, num);
  return 0;
}

