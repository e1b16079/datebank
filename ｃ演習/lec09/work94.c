#include<stdio.h>
#define N 5
int main(void){

   int a[N] = {0,10,20,30,40};
   int b[N] = {0,10,20,30,40};
   int c[N] = {0,10,20,30,40};
   int i, j, k, l, m, n, cnt, tmp;

   for (cnt=0;cnt<N;cnt++){

   for(i=0;i<N-1;i++){
      a[i]=a[i+1];
   }
   printf("%d回目：a =", cnt+1);
   for (j=0;j<N;j++){
    printf("%2d ",a[j]);
   }
     printf("\n");
   for(k=N-1;k>0;k--){
      b[k]=b[k-1];
   }
   printf("%d回目：b =", cnt+1);
   for (l=0;l<N;l++){
    printf("%2d ",b[l]);
   }
     printf("\n");
     tmp=c[N-1];
   for(m=N-1;m>0;m--){
      c[m]=c[m-1];
   }
   c[0]=tmp;
   printf("%d回目：a =", cnt+1);
   for (n=0;n<N;n++){
    printf("%2d ",c[n]);
   }
   printf("\n");
   printf("\n");
   printf("\n");}
   return 0;
}
