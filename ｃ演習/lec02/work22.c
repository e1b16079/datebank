#include<stdio.h>
int main(void){
    int a;
    int b;
    int c;
    double d;

    printf("1人目の得点を入力してください:\n");
    scanf("%d",&a);
    
    printf("2人目の得点を入力してください:\n");
    scanf("%d",&b);

    printf("3人目の得点を入力してください:\n");
    scanf("%d",&c);

    d=((double)a+b+c)/3;
    printf("３人の平均点は%.1f点です。\n",d);

    return 0;
}
