#include<stdio.h>
int main(void){
    int a, i, sum1=0, sum2=0, c1=0, c2=0;
    double ave1, ave2;

    for(i=1;i<=5;i++){
      printf("値を入力して下さい：");
      scanf("%d",&a);

      if(a%2==1){
      sum1=sum1+a;
      c1=c1+1;}
      else{
      sum2=sum2+a;
      c2=c2+1;}
     }
    ave1=(double)sum1/c1;
    ave2=(double)sum2/c2;

    if(sum1==0){
      printf("奇数の値は入力されませんでした。\n");}
    else{
    printf("奇数の合計は%d、平均は%.2fです。\n", sum1, ave1);}

    if(sum2==0){
      printf("偶数の値は入力されませんでした。\n");}
    else{
    printf("偶数の合計は%d、平均は%.2fです。\n", sum2, ave2);}
    return 0;
}




