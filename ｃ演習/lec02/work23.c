#include<stdio.h>
int main(void){
    
    double before;
    int after;

    printf("数値を入力してください：");
    scanf("%lf", &before);

    after=(int)before;
   
    printf("切り捨てを行った後の値は%dです。\n",after);
    printf("切り捨てを行う前の値は%fです。\n",before);

    return 0;
}
