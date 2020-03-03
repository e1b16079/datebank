#include<stdio.h>
#define N 8
int main(void){
   int data[N] = {10,20,30,40,50,60,70};
   int i, flag=0, cnt=6, k, tmp;

   printf("data[7]:");
   scanf("%2d", &data[7]);

   printf("挿入前:");
   for (i=0;i<N;i++){
      printf("%d ", data[i]);
   }
   printf("\n");

   while(flag==0){
    if(data[7]>data[cnt]){
     flag=1;
    cnt=cnt+2;
    }
    if(cnt==0){
     flag=1;
     cnt++;
    }
    cnt--;
    }
   tmp=data[7];
   for(k=N-1;k>cnt;k--){
      data[k]=data[k-1];
   }

   data[cnt]=tmp;

   printf("挿入後:");
   for (i=0;i<N;i++){
      printf("%d ", data[i]);
   }
   printf("\n");
   return 0;
}


