#include<stdio.h>

  void BMIndex(double t,int w){
    double b;

    t=t/100;
    b=w/(t*t);
    printf("あなたのBMI指数は%.1fです。\n", b);

    if(18.5>b){
      printf("肥満度は、やせです。\n");}
    else
      if(18.5<=b&&b<25.0){
        printf("肥満度は、標準です。\n");}
      else
        if(25.0<=b&&b<30){
          printf("肥満度は、肥満です。\n");}
        else
          printf("肥満度は、過度肥満です。\n");
}

int main(void){
   int a, b;
   printf("身長（単位：cm）の入力：\n");
    scanf("%d",&a);
    printf("体重（単位：kg）の入力：\n");
    scanf("%d",&b);

    BMIndex(a,b);

   return 0;
}
