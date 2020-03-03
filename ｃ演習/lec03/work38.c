#include<stdio.h>
int main(void){
    int a, b, c, tmp;

    printf("1番目の整数を入力して下さい：");
    scanf("%d",&a);
    printf("2番目の整数を入力して下さい：");
    scanf("%d",&b);
    printf("3番目の整数を入力して下さい：");
    scanf("%d",&c);

    printf("入力された初期順は（%d,%d,%d）です\n",a,b,c);

    if(a<b){
    tmp=a;
    a=b;
    b=tmp;
    }
    if(a<c){
    tmp=a;
    a=c;
    c=tmp;
    }
    if(b<c){
    tmp=b;
    b=c;
    c=tmp;
    }
    printf("入力された整数は降順（%d,%d,%d）に入れ替わりました。\n",a,b,c);
     return 0;
}






