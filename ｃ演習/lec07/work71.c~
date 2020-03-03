#include<stdio.h>
int main(void){

   int a, b, c, i, j;

   printf("表示範囲の入力\n");
   scanf("%d",&a);
   scanf("%d",&b);

   if(a>b){
     c=a;
     a=b;
     b=c;
   }
   printf("%d×%dから%d×%dの範囲を表示します。\n",a, a, b, b);

   for(i=a;i<=b;i++){
     for(j=a;j<=b;j++){
      printf("%3d",i*j);
     }
     printf("\n");
   }

   return 0;
}
