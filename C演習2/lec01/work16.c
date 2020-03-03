#include<stdio.h>
#include<math.h>
int main(void){

  int data[100], sum=0, i, x, j;
  double ave;
  
  i=0;
  while (scanf("%d", &x) != EOF) {
    data[i] = x;
    sum=sum+x;
    i++;
    printf("%d ",x);
  }

  ave=(double)sum/i;
  sum=0;

  printf("\n");
  for(j=0;j<i;j++){
   if(data[j]>=ave){
   sum++;
   printf("%d ",data[j]);
   }
  }

  printf("\n");
  printf("平均値%.2f以上の個数は%dです\n",ave ,sum);

  return 0;
}
