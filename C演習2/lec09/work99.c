#include <stdio.h>
#include <math.h>

struct fraction{
  int num;
  int den;
};

int main(void) {

  struct fraction f1;
  struct fraction f2;

  double fra1, fra2;

  printf("> x/y ");
  scanf("%d %d",&f1.num ,&f1.den);
  printf("> x/y ");
  scanf("%d %d",&f2.num ,&f2.den);

  fra1 = (double)f1.num/f1.den;
  fra2 = (double)f2.num/f2.den;

  if(fra1==fra2){
   printf("%d/%dは%d/%dと等しい。\n",f1.num ,f1.den ,f2.num ,f2.den);
  }
  else if(fra1<fra2){
   printf("%d/%dは%d/%dより小さい。\n",f1.num ,f1.den ,f2.num ,f2.den);
  }
  else{
   printf("%d/%dは%d/%dより大きい。\n",f1.num ,f1.den ,f2.num ,f2.den);
  }

  return 0;
}
