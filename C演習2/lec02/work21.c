#include<stdio.h>
#include<math.h>

int sumEven(int x, int y){
  int z=0;

  while(x<=y){
   if(x%2==0){
    z=z+x;
   }
  x++;
  }

  return z;
}

int main(void){
   int x, y, sum=0;

  printf("正整数 X Y ");
  scanf("%d %d" ,&x ,&y);

  sum=sumEven(x, y);

  printf("%dから%dまでの偶数の和は%dです\n",x ,y ,sum);

  return 0;
}
