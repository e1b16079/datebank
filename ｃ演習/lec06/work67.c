#include<stdio.h>
int main(void){

   int i, c=0, sum = 0;

   while(sum<=200&&c<=10){
   scanf("%d", &i);
   sum = sum + i;
   c++;
   }

   if(sum>200){
    printf("合計値が200を超えました。\n");
   }
   if(c>10){
    printf("入力データ数が10を超えました。\n");
   }
   printf("入力データ数は%dです。\n", c);
   printf("合計値は%dです。\n", sum);
   
   return 0;
}






