#include<stdio.h>
#define LINE 3

int a[LINE][LINE];
int b[LINE][LINE];
int c[LINE][LINE];


void printArray3(){

   int i, j;

   for(i=0;i<LINE;i++){
     for(j=0;j<LINE;j++){
       printf("%4d",c[i][j]);
     }
     printf("\n");
   }
   printf("\n");
}


int main(void){

   int i, j, k, sum=0, d[LINE*LINE], l=0;

   for(i=0;i<LINE;i++){
     for(j=0;j<LINE;j++){
       scanf("%d",&a[i][j]);
     }
   }

   for(i=0;i<LINE;i++){
     for(j=0;j<LINE;j++){
       scanf("%d",&b[i][j]);
     }
   }

   for(i=0;i<LINE;i++){
     for(j=0;j<LINE;j++){
       for(k=0;k<LINE;k++){
         sum=sum+a[i][k]*b[k][j];
         }
      d[l]=sum;
      l++;
      sum=0;
     }
   }

   k=0;
   for(i=0;i<LINE;i++){
     for(j=0;j<LINE;j++){
       c[i][j]=d[k];
       k++;
     }
   }



   printArray3();

   return 0;
}
