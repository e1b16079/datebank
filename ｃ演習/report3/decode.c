#include<stdio.h>
int main(void){

   int a, b, c, d, e, i, j;

   printf("P2\n");

   scanf("%d",&a);
   printf("%d\n",a);
   scanf("%d",&b);
   printf("%d\n",b);
   scanf("%d",&c);
   printf("%d\n",c);

   for(i=1;i<=a*b;i=i+e){
     scanf("%d",&d);
     scanf("%d",&e);
     for(j=1;j<=e;j++){
      printf("%d\n",d);
     }
   }
 
  return 0;
}

