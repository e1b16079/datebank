#include<stdio.h>
#define N 12
int main(void){

   int a[N]={0,10,20,30,40,50,60,70,80,90,100,110};
   int i, tmp=0, j;

   printf("配列a = ");
   for (i=0;i<N;i++){
        printf("%3d ", a[i]);
   }
   printf("\n");

   for(i=0;i<N/2;i++){
     printf("a[%d]とa[%d]を交換します。\n",i,N-(i+1));
     tmp=a[i];
     a[i]=a[N-(i+1)];
     a[N-(i+1)]=tmp;
  } 

   printf("配列a =");
   for (j=0;j<N;j++){
    printf("%3d ",a[j]);
   }
   printf("\n");
   return 0;
   }
