#include<stdio.h>
int main(void){
    int a;
    int b;
    int tmp;

    printf("aの値を入力してください：");
    scanf("%d",&a);
    printf("bの値を入力してください：");
    scanf("%d",&b);

    printf("入力時：　a=%d b=%d です。\n",a,b);

    tmp=a;
    a=b;
    b=tmp;
    
    printf("入れ替え後： a=%d b=%d です。\n",a,b);

    return 0;
}
