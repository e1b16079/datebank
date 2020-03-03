#include<stdio.h>
#define LINE 3
#define COLUM 4

int a[LINE][COLUM];

void printArray2(){

   int i, j;

   for(i=0;i<LINE;i++){
     for(j=0;j<COLUM;j++){
       printf("%3d",a[i][j]);
     }
     printf("\n");
   }
   printf("\n");
}


int main(void){

   int i, j, k;
   int b[LINE*COLUM];

   for(i=0;i<LINE*COLUM;i++)b[i]=i+1;

   k=0;
   for(i=0;i<COLUM;i++){
     for(j=0;j<LINE;j++){
       a[j][i]=b[k];
       k++;
     }
   }

   printArray2();

   return 0;
}
