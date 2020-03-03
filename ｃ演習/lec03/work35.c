#include<stdio.h>
int main(void){
    int a;
    int b;

    printf("値を入力して下さい：");
    scanf("%d",&a);

    if(a>=0){
    printf("絶対値は%dです。\n",a);
    }
    else{
    b=-a;
    printf("絶対値は%dです。\n",b);
    }

    return 0;

}
