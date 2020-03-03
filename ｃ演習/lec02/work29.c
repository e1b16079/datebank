#include<stdio.h>
int main(void){
    double a;
    double b;
    int sute;
    int age;
    int sisha;
    printf("aの値を入力してください：");
    scanf("%lf",&a);
    printf("bの値を入力してください：");
    scanf("%lf",&b);
    
    sute=(int)(a+b);
    printf("切り捨てを行った場合の結果は%dです。\n",sute);

    age=(int)(a+b+0.9);
    printf("切り上げを行った場合の結果は%dです。\n",age);

    sisha=(int)(a+b+0.5);
    printf("四捨五入を行った場合の結果は%dです。\n",sisha);

    return 0;
}
