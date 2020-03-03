#include<stdio.h>
int main(void){

   int a, i=0;
   
   scanf("%d", &a);
   while(a>=0){
     printf("%3d",a);
     scanf("%d", &a);
     i++;}

   printf("\n");
   printf("入力された０以上の数は%d個です。\n", i);

   return 0;
}
