#include<stdio.h>
int main(void){
   int suu, butu, sum=0;
   double ave;

   printf("数学の得点を入力してください：");
   scanf("%d",&suu);
   printf("物理の得点を入力してください：");
   scanf("%d",&butu);

   sum=suu+butu;
   ave=(double)sum/2;

   printf("平均点は%.1f点です。\n" ,ave);

   if(suu<60){
     if(butu<60){
      printf("数学と物理の補習を受けてください。\n");
     }
     
     else{
       printf("数学の補習を受けてください。\n");
     }
   } 
   else{
     if(butu<60){
      printf("物理の補習を受けてください。\n");
     }
     else{
      printf("合格です。\n");
     }
   }
   
   return 0;
}
