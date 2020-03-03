#include<stdio.h>
#define MAXNUM 5

void printArray(int a[],int b){
  int i;
  printf("配列dataの要素：");
  for(i=0;i<b;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}

int limitFifteen(int c[],int d){
  int cnt=0, i;
  
  for(i=0;i<d;i++){
   if(c[i]>15){
   c[i]=0;
   cnt++;
   }
   }
  return cnt;
}

int main(void){

  int data[MAXNUM]={130,9,20,13,15}, cnt;

  printArray(data,MAXNUM);

  cnt = limitFifteen(data,MAXNUM);

  printArray(data,MAXNUM);

  printf("15を超える要素が%d個ありました。\n",cnt);

  return 0;
}
