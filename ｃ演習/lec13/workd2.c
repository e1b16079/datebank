#include<stdio.h>
#define MAXNUM 20
int main(void){

   int num=0, sum=0, inp;

   scanf("%d",&inp);
   while(inp>=0&&num<MAXNUM){
   sum=sum+inp;
   num++;
   scanf("%d",&inp);
   }

   if(num==0){
     printf("入力されたデータがありません\n");
   }
   else{
     printf("データ数=%d 合計=%d\n",num ,sum);
   }

   return 0;
}
