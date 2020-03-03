#include<stdio.h>
#define NUM 100
int main(void){

   int flag[NUM], i, j, k;

   for(i=2;i<NUM;i++){
   flag[i]=1;
   }

   for(i=2;i<NUM;i++){
     for(j=i+1;j<NUM;j++){
       if(j%i==0){
        flag[j]=0;
       }
     }
   }

   for(k=2;k<NUM;k++){
     if(flag[k]==1){
       printf("%dは素数です\n",k);
     }
    }


   return 0;
}
