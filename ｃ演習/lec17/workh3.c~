#include<stdio.h>
#include<math.h>
#define LINE 10
#define COLUM 3

int a[LINE][COLUM];

void printArray2(){

   int i, j;

   for(i=0;i<LINE;i++){
     for(j=0;j<COLUM;j++){
       printf("%4d",a[i][j]);
     }
     printf("\n");
   }
   printf("\n");
}

void printArray2D(){

   int i, j;

   for(i=0;i<LINE;i++){
     for(j=0;j<COLUM;j++){
       printf("%3.1d",a[i][j]);
     }
     printf("\n");
   }
   printf("\n");
}

int main(void){
   int i,j,sum1=0,sum2=0;
   double ave, bun, hensa;

   for(i=0;i<LINE;i++){
     for(j=0;j<COLUM-1;j++){
       scanf("%d",&a[i][j]);
     }
     a[i][COLUM-1]=a[i][0]+a[i][1];
   }

   printArray2();

   for(j=0;j<COLUM;j++){
   for(i=0;i<LINE;i++){
    sum1=sum1+a[i][j];
   }
   ave=(double)sum1/LINE;
   for(i=0;i<LINE;i++){
   a[i][j]=(a[i][j]-ave)*10;
   }
   
   for(i=0;i<LINE;i++){
   sum2=sum2+a[i][j]*a[i][j];
   }
   bun=(double)sum2/LINE;
   hensa=sqrt(bun);
   for(i=0;i<LINE;i++){
   a[i][j]=50+(a[i][j]/hensa);
   }
   }

   printArray2D();

   return 0;
}
