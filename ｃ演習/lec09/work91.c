#include<stdio.h>
#define NUMBER 8
int main(void){

   int data[NUMBER], i, ave, sum=0;

   for(i=0;i<NUMBER;i++){
     scanf("%d",&data[i]);
     sum = sum + data[i];
   }

   ave = sum / NUMBER;
   printf("平均値は%dです。\n",ave);
   return 0;
}
