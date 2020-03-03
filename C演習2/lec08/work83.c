#include <stdio.h>
#include <stdlib.h>

#define  ARRAY_SIZE 10

void countOddEven(int seq1[], int n, int *odd, int *even) {
  int *p1;

/***** ここから修正します。*****/ 
  for(p1=seq1;p1<seq1+n;p1++){
   if(*p1%2==1){
   *odd += 1;
   }
   else{
   *even +=1;
   }
}
/***** ここまで修正します。*****/
}

int main(int argc, char *argv[]) {
  int data[ARRAY_SIZE];
  int i, num, odd=0, even=0;

  num = argc - 1;
  if (num <= 0 || num > ARRAY_SIZE) {
    fprintf(stderr, "引数の個数 %d が誤っています。\n", num);
    exit(1);
  }

  for (i = 0; i < num; i++) {
    data[i] = atoi(argv[i + 1]);
  }

/***** ここから修正します。*****/ 

  /* countOddEven 関数を呼び出し、配列 data 中の奇数・偶数の個数を odd, even に格納します。 */
  countOddEven(data,num,&odd,&even);

/***** ここまで修正します。*****/

  printf("%d 個のデータの中に %d 個の奇数と %d 個の偶数があります。\n",
         num, odd, even);

  return 0;
}

