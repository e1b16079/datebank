#include<stdio.h>
#include<math.h>
int main(void){

  int x, y, i, sum=0;

  printf("正整数 X Y ");
  scanf("%d %d" ,&x ,&y);

  for(i=x;i<=y;i++){
   if(i%2==0){
    sum=sum+i;
   }
  }

  printf("%dから%dまでの偶数の和は%dです\n",x ,y ,sum);

  return 0;
}
