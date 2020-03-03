#include<stdio.h>

int main(void){

    int number, kurai, x;

    printf("数値を入力してください\n");
    scanf("%d",&number);

    printf("抜き出す位を入力して下さい");
    scanf("%d",&kurai);

    x=number/kurai%10;
    
    printf("%dの%dの位は、%dです。",number,kurai,x);

    return 0;

}

