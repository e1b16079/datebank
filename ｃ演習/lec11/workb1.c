#include<stdio.h>

int maxAorB(int a,int b);

int main(void){

   int a, b, max;

   printf("数値Aを入力して下さい：");
   scanf("%d", &a);
   printf("数値Bを入力して下さい：");
   scanf("%d", &b);

   max=maxAorB(a,b);

   printf("最大値は%dです。\n",max);

   return 0;
}

int maxAorB(int a,int b){
   int re;

   re=a;
   if(a<b){
   re=b;
   }
   return re;
}
