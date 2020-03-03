#include<stdio.h>
#include<math.h>
int main(void){

  int data[100], cnt, sum=0, i, x;

  i=0;
  while (scanf("%d", &x) != EOF) {
    data[i] = x;
    i++;
    printf("%d ",x);
  }

  cnt=i;

  printf("\n");
  for(i=0;i<cnt;i++){
   if(data[i]>=cnt){
   sum++;
   printf("%d ",data[i]);
   }
  }
  printf("\n");
  printf("データ数%d以上の個数は%dです\n",cnt ,sum);

  return 0;
}
