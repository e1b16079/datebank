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

int maxArray(int c[],int d){
  int i, max=0;

  for(i=0;i<d;i++){
   if(max<c[i]){
   max=c[i];
  }
  }
   return max;
}

int main(void){

  int data[NUM],i,max;

  for(i=0;i<NUM;i++){
   scanf("%d", &data[i]);
  }

  printArray(data,NUM);

  max=maxArray(data,NUM);

  printf("配列dataの最大値は%dです。\n",max);
  return 0;
}
