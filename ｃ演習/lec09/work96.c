#include<stdio.h>
#define N 10
int main(void){
   int data[N], i, j, k, tmp;

   for(i=0;i<N;i++){
    printf("data[%d]:",i);
    scanf("%d",&data[i]);
   }

   for(i=0;i<N;i++){
     for(j=i;j<N;j++){
      if(data[j]<data[i]){
         tmp=data[i];
    data[i]=data[j];
    data[j]=tmp;
      }
   }

}
  
   printf("配列a =");
   for (k=0;k<N;k++){
    printf("%2d ",data[k]);
   }
   printf("\n");

   return 0;
}
