#include<stdio.h>
int main(void){

    int a, i, sum = 0;
    double ave;

    for(i=1;i<=5;i++){
      printf("数値を入力して下さい：");
      scanf("%d",&a);
      sum= sum+a;}

    ave=(double)sum/(i-1);

    printf("数値の合計は%dです。\n",sum);
    printf("数値の平均は%.1fです。\n",ave);

    return 0;
}

