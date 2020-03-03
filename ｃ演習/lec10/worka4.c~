#include<stdio.h>

  void printStars(int a){
    int i, j;
    while(a>0){
    for(i=a;i>=10;i=i-10){
     printf("★");
    a=a-10;
    }
    for(j=i;j>0;j--){
     printf("☆");
    a=a-1;
    }
    }
 }

int main(void){
   int a[10]={69,63,90,58,8,22,19,20,13,74}, k;

   for(k=0;k<10;k++){
   printf("%d:%d",k+1,a[k]);
   printStars(a[k]);
   printf("\n");
   }

   return 0;
}
