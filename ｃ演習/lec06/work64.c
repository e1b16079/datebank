#include<stdio.h>
int main(void){

    int i, inp, max;

    printf("データ入力を始めます\n");
    i=1;
    scanf("%d", &inp);
    max = inp;

    while(i<5){
      scanf("%d", &inp);
      if(inp>max){
       max = inp;}
      i++;}

    printf("最大値は%dです。\n", max);

    return 0;
}
