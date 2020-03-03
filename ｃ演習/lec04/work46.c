#include<stdio.h>
int main(void){
    int a, b, c;

    printf("1番目の角度を入力して下さい：");
    scanf("%d",&a);
    printf("2番目の角度を入力して下さい：");
    scanf("%d",&b);

    c=180-(a+b);
    printf("残りの角度は%d度です。\n",c);

    if(a==60&&b==60&&c==60){
      printf("その三角形は正三角形です\n");
    }
    if((a==b||b==c||c==a)&&(a!=60&&b!=60&&c!=60)){
      printf("その三角形は二等辺三角形です\n");
    }
    if(a==90||b==90||c==90){
      printf("その三角形は直角三角形です\n");
    }
return 0;
}
