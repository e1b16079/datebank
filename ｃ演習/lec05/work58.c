#include<stdio.h>
int main(void){
    
    int a, b=1, i;

    printf("ｎの値を入力して下さい：");
    scanf("%d",&a);

    if(a==0){
      }
    else 
      for(i=a;i>0;i--){
        b=b*i;}

    printf("%dの階乗は%dです。\n", a, b);

    return 0;
}
        
