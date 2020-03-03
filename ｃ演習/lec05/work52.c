#include<stdio.h>
int main(void){

    int i, sum = 0;
    double ave;

    for(i=1; i<11; i++)
        sum = sum + i;

    ave = (double)sum / 10;

    printf("数値の合計は%dです。\n", sum);
    printf("数値の平均は%.1fです。\n", ave);

    return 0;
}
