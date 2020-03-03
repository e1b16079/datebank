#include<stdio.h>
#define NUM 10

void printArray(int a[],int b){
 int i;
  printf("配列dataの要素：");
  for(i=0;i<b;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}

int countArray(int c[], int d, int min, int max){
  int i, cnt=0;

  for(i=0;i<d;i++){
   if(min<=c[i]&&c[i]<=max){
    cnt++;
   }
  }
  return cnt;
}

int main(void){

   int min=18, max=55, data[NUM], cnt, i;

  for(i=0;i<NUM;i++){
   scanf("%d", &data[i]);
  }

  printArray(data,NUM);

  printf("範囲の指定（%d−%d）",min,max);

  cnt=countArray(data,NUM,min,max);

  printf("%dから%dまでの値は%d個あります。\n",min,max,cnt);

  return 0;
}
