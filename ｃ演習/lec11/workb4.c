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

void sortArray(int c[],int d){
  int i, j, tmp=0;

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
int main(void){
  int data[MAXNUM]={50,40,30,20,10};

  printArray(data,MAXNUM);

  sortArray(data,MAXNUM);

  printArray(data,MAXNUM);

  return 0;
}
