#include<stdio.h>
int main(void){
    double x, y, z;
    int a, b;

    printf("xの値を入力して下さい。\n");
    scanf("%lf",&x);
    printf("yの値を入力して下さい。\n");
    scanf("%lf",&y);
    
    z=(x*x)+(y*y);
    a=0;
    b=0;
    if(-5<=x&&x<=5&&-5<=y&&y<=5){
      a=1;}
    if(z<=49){
      b=1;}
    if(b==0){
      printf("(%.1f,%.1f)は、正方形と外接円の両方の外側です。\n", x, y);}
    else
      if(a==0){
        printf("(%.1f,%.1f)は、正方形の外側で外接円の内側です。\n", x, y);}
      else{
        printf("(%.1f,%.1f)は、正方形と外接円の両方の内側です。\n", x, y);}

    return 0;
}





