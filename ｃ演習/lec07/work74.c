#include<stdio.h>
int main(void){

   int a, i, j;

   for(i=0;i<5;i++){
     scanf("%d", &a);
     printf("%d:",a);
      for(j=1;j<=a;j++){
       printf("＊");
       }
     printf("\n");
   }
   return 0;
}
