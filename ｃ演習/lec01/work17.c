#include<stdio.h>

int main(void){
    int a;
    int b;
    int c;
    int before;
    int after;

    
    printf("三桁の数値を入力して下さい\n");
    scanf("%d" ,&before);

    a=before/100%10;
    b=before/10%10;
    c=before%10;

    after=c*100+b*10+a;

    printf("入れ換えた結果は%dです。\n",after);

    return 0;
}

