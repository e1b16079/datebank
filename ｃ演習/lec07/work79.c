#include<stdio.h>
int main(void){

   int a, c=0, i, j;

   printf("幅：");
   scanf("%d", &a);

   for(i=1;i<=a;i++){
    
    for(j=1;j<=a;j++)
      if(c%2==0){
       printf("■");
       c++;}
      else{
       printf("□");
       c++;}
    printf("\n");
    }
    return 0;
}

