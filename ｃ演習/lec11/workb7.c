#include<stdio.h>
#define NUM 5

void printArray(int a[],int b){
 int i;
  printf("配列dataの要素：");
  for(i=0;i<b;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}

void maskArray(int a[],int b,int patten){
 int i;
 if(patten==1){
   for(i=0;i<b;i++){
    if(a[i]%2==1){
    a[i]=0;
    }
    }
    }
 else{
   for(i=0;i<b;i++){
    if(a[i]%2==0){
    a[i]=0;
    }
    }
    }
}
int main(void){

  int i, shori;
  int data[NUM];

  printf("データを入力して下さい：");

  for(i=0;i<5;i++){
    scanf("%d",&data[i]);
  }

  printArray(data,NUM);

  printf("処理方法を選択して下さい：");
  scanf("%d",&shori);
  
  maskArray(data,NUM,shori);

  printArray(data,NUM);

  return 0;
}
