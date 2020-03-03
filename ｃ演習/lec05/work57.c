#include<stdio.h>
int main(void){

    int a, b, i, sum1 = 0, sum2 = 0;
    double ave, bun, c;

    printf("人数を入力して下さい:");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
      printf("身長（ｃｍ）を入力して下さい：");
      scanf("%d",&b);
      sum1= sum1+b;
      sum2= sum2+b*b;}

    ave=(double)sum1/(i-1);
    c=(double)sum1/(i-1);
    c=c*c;
    bun=(double)sum2/(i-1)-c;
    
    printf("入力した%d人の平均は%.2fです。\n", a, ave);
    printf("入力した%d人の分散は%.2fです。\n", a, bun);

    return 0;
}
