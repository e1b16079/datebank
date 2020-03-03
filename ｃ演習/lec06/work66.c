#include<stdio.h>
int main(void){

    int i, sum = 0;

   while(sum<=200){
   scanf("%d", &i);
   sum = sum + i;
   }

   printf("合計値が200を超えました。\n");
   printf("合計値は%dです。\n", sum);

   return 0;
}
