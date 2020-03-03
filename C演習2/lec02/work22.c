#include<stdio.h>
#include<math.h>

double power(double x, int n){
  double y=1;
  while(n>0){
  y=y*x;
  n--;
  }
  return y;
}

int main(void){
   double x, jou;
   int n;

  printf(" X N ");
  scanf("%lf %d" ,&x ,&n);

  jou=power(x, n);

  printf("%.2fの%d乗は%.2fです\n",x, n, jou);

  return 0;
}
