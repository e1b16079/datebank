#include<stdio.h>
#include<math.h>
int main(void){

  int x;

  printf("整数 x ");
  scanf("%d", &x);

  if(x>=0){
   printf("%dは0以上の整数です\n", x);
  }
  else{
   printf("%dは負の整数です\n", x);
  }

  return 0;
}
