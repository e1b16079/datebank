#include<stdio.h>
int main(void){

   int a[10] = {0,10,20,30,40,50,60,70,80,90};
   int b[10];
   int i;

   for(i=0;i<10;i++){
   b[i] = a[9-i];}

   for(i=0;i<10;i++){
   printf("a[%d]=%d, b[%d]=%d\n",i, a[i],i,b[i]);
   }
   return 0;
}
