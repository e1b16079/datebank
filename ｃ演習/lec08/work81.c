#include<stdio.h>
int main(void){

   int k=0;
   int data[4];

   data[0]=11;
   data[1]=data[0]+5;
   scanf("%d",&data[2]);
   data[3]=data[k] * data[k+1];


   printf("data[0]=%d\n",data[0]);
   printf("data[1]=%d\n",data[1]);
   printf("data[2]=%d\n",data[2]);
   printf("data[3]=%d\n",data[3]);

   return 0;
}
