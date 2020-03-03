#include<stdio.h>
int main(void){

    int a, b=0, f=0, sum = 0, c = 0;

    while(f<1){
     scanf("%d", &a);
     if(a>=b){
     sum= sum + a;
     c++;
     b = a;
     }
     else
     f=1;
     }

    printf("最後の値は%dです。\n", b);
    printf("入力されたデータ数は%d個です。\n", c);
    printf("データの合計は%dです。\n", sum);

    return 0;
}

