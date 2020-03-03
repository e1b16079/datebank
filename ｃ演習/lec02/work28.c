#include<stdio.h>
int main(void){
    int a;
    int b;
    int c;
    int tmp;
    printf("aの値を入力して下さい：");
    scanf("%d",&a);

    printf("bの値を入力して下さい：");
    scanf("%d",&b);

    printf("cの値を入力して下さい：");
    scanf("%d",&c);

    printf("初期値：abc=(%d, %d, %d)\n",a,b,c);

    tmp=a;
    a=b;
    b=c;
    c=tmp;
    printf("入れ替え： abc=(%d, %d, %d)\n",a,b,c);

   tmp=a;
    a=b;
    b=c;
    c=tmp;
    printf("入れ替え： abc=(%d, %d, %d)\n",a,b,c);

   tmp=a;
    a=b;
    b=c;
    c=tmp;
    printf("入れ替え： abc=(%d, %d, %d)\n",a,b,c);

    return 0;
}
 







