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

void sortArray(int c[],int d,int pat){
  int i, j, tmp=0;

  if(pat==1){
   for(i=0;i<d-1;i++){
   for(j=0;j<d-i;j++){
     if(c[j]>c[j+1]){
     tmp=c[j];
     c[j]=c[j+1];
     c[j+1]=tmp;
  }
  }
  }
  }
  else{  
   for(i=0;i<d-1;i++){
   for(j=0;j<d-i;j++){
     if(c[j]<c[j+1]){
     tmp=c[j];
     c[j]=c[j+1];
     c[j+1]=tmp;
  }
  }
  }
  }
}

int main(void){

 int data[NUM]={56,52,7,49,18,98,30,3,33,4};
 int shori;

  printArray(data,NUM);

  printf("並べ替え方の選択：");
  scanf("%d",&shori);

  sortArray(data,NUM,shori);

  printArray(data,NUM);

  return 0;
}
