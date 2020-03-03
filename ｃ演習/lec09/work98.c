#include<stdio.h>
#define N 10
int main(void){
   int i, cnt, k, tmp, flag, data[N];

   for(i=0;i<N;i++){
   printf("data[%d]:",i);
   scanf("%2d", &data[i]);
   cnt=i;
   flag=0;
   while(flag==0){
    if(data[i]>data[cnt]){
     flag=1;
    cnt=cnt+2;
    }
    if(cnt==0){
     flag=1;
     cnt++;
    }
    cnt--;
    }
   tmp=data[i];
   for(k=N-1;k>cnt;k--){
      data[k]=data[k-1];
   }

   data[cnt]=tmp;
   }
   printf("配列a =");
   for (i=0;i<N;i++){
      printf("%d ", data[i]);
   }
   printf("\n");
   return 0;
}




