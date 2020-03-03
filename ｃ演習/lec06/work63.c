#include<stdio.h>
int main(void){

    int i, sum = 0;

    i=1;
    while(i<11){
       sum = sum + i;
       i++;}

    printf("数値の合計は%dです。\n", sum);

    return 0;
}
