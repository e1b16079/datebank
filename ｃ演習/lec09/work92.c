#include<stdio.h>
#define N 10
int main(void){

   int a[N]={0,10,20,30,40,50,60,70,80,90}, x ,y, tmp;

   printf("整数ｘ： "); scanf("%d", &x);
   printf("整数y： "); scanf("%d", &y);
   printf("交換前：　a[%d]=%d, a[%d]=%d\n", x, a[x], y, a[y]);

   tmp = a[x];
   a[x] = a[y];
   a[y] = tmp;

   printf("交換後： a[%d]=%d, a[%d]=%d\n", x, a[x], y, a[y]);
   return 0;
}
