#include<stdio.h>

int main(void){
    int dec;
    int d3;
    int d2;
    int d1;
    int d0;

    printf("変換する値を入力して下さい\n");
    scanf("%d",&dec);

    d0=dec%2;
    d1=dec/2%2;
    d2=dec/2/2%2;
    d3=dec/2/2/2%2;

    printf("(10進数)%d=　（2進数）%d%d%d%d\n",dec, d3, d2, d1,d0);

    return 0;
}
