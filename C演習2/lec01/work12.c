#include<stdio.h>
#include<math.h>
int main(void){

  int x, y;

  printf("整数 X Y ");
  scanf("%d %d" ,&x ,&y);
  
  if(x>y){
   printf("%dは%dより大きい\n",x ,y);
  }
  else if(x==y){
   printf("%dと%dは等しい\n",x ,y);
  }
  else {
   printf("%dは%dより小さい\n",x ,y);
  }

  return 0;
}
