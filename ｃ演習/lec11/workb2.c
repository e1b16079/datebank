#include<stdio.h>
#define MAXNUM 5

double calcAverage(int a[],int b){
   int i, sum=0;
   double ave;

   for(i=0;i<b;i++){
   sum=sum+a[i];
   }
   ave=(double)sum/b;
   return ave;
}
 
int main(void){

   int data[MAXNUM], i;
   double average;

   for(i=0; i<MAXNUM;i++){
     printf("data[%d]の値を入力して下さい：", i);
     scanf("%d", &data[i]);
   }

   average=calcAverage(data,MAXNUM);

   printf("配列aの平均は%.1fです。\n",average);
   
   return 0;
}
   
