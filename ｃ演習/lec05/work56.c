#include<stdio.h>
int main(void){

    int a, b, c, d = 0, i;

    printf("一つ目の値の入力：");
    scanf("%d",&a);
    printf("二つ目の値の入力：");
    scanf("%d",&b);

    if(a>b){
    c=a;
    a=b;
    b=c;}

    for(i=a;i<=b;i++){
       d= d+i*i;
       }

    printf("%dから%dの平方和は%dです。\n",a, b, d);

    return 0;
}
