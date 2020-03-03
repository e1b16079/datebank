#include<stdio.h>
int main(void){

   int a[12] = {32,23,28,18,20,11,10,8,5,9,2,3};
   int min_i=0, i;

   for(i=0;i<12;i++){
     if(a[i]<a[min_i])
     min_i = i;
   }

   printf("添字　　：%d\n",min_i);
   printf("最小値：%d\n",a[min_i]);

   return 0;
}

