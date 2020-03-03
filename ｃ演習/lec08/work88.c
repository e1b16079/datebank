#include<stdio.h>
int main(void){

   int a, b, i, min;
   double data[10];

   for(i=0;i<10;i++){
    printf("data[%d]:",i);
    scanf("%lf",&data[i]);
   }
   printf("a:");
   scanf("%d",&a);
   printf("b:");
   scanf("%d",&b);

   min=a;
   for(i=a;i<=b;i++){
   if(data[i]<data[min])
     min = i;
   }

   printf("最小値：%f\n",data[min]);
   printf("添字　　：%d\n",min);
   

   return 0;
}

