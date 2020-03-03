#include<stdio.h>
int main(void){

    int a, i, sum1 = 0, sum2 = 0, cnt1 = 0, cnt2 = 0;
    double ave1, ave2;

    for(i=0;i<5;i++){
      printf("数値を入力して下さい：");
      scanf("%d",&a);
      if(a>0){
      sum1= sum1+a;
      cnt1++;}
      else{
      sum2= sum2+a;
      cnt2++;}
      }

    ave1=(double)sum1/cnt1;
    ave2=(double)sum2/cnt2;

    printf("正の数値の合計は%d、平均は%.1fです。\n",sum1, ave1);
    printf("それ以外の数値の合計は%d、平均は%.1fです。\n",sum2, ave2);

    return 0;
}
