#include<stdio.h>
int main(void){
    int a, b, c, flag;

    printf("数値aを入力して下さい：");
    scanf("%d",&a);
    printf("数値bを入力して下さい：");
    scanf("%d",&b);
    printf("数値cを入力して下さい：");
    scanf("%d",&c);

    flag=0;

    if(a>0){
    flag=1;
    }
    if(b>0){
    flag=1;
    }
    if(c>0){
    flag=1;
    }
    if(flag==1){
    printf("正の値が一つ以上あります。\n");
    }
    else{
    printf("正の値はありません。\n");
    }

    return 0;
}



