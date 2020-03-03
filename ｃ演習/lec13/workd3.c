#include<stdio.h>
#define MAXNUM 100
int main(void){

   int prime[MAXNUM]={0,2}, i, j, flag=0, count=1;

   for(i=2;i<MAXNUM;i++){
     for(j=1;j<=count;j++){
       if(i%prime[j]==0){
        flag=1;
       }
     }
     if(flag==0){
       count++;
       prime[count]=i;
     }
     flag=0;
   }

  for(i=1;i<=count;i++){
    printf("%3d",prime[i]);
    if(i%10==0){
      printf("\n");
    }
   }
  
   printf("\n");
   printf("素数は%d個あります。\n",count);

   return 0;
}
