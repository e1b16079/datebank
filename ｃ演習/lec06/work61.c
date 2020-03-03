#include<stdio.h>
int main(void){

    int a, b, c;

    printf("初期値aの入力：");
    scanf("%d", &a);
    printf("条件（b以下）の入力：");
    scanf("%d", &b);
    printf("増殖値cの入力：");
    scanf("%d", &c);

    while(a <= b){
       printf("aの値は%dです。\n", a);
       a = a + c;}
    return 0;
}
