#include<stdio.h>
int main(void){
    int a, b, c, d;

    printf("1番目のデータを入力して下さい：");
    scanf("%d",&a);
    printf("2番目のデータを入力して下さい：");
    scanf("%d",&b);
    printf("3番目のデータを入力して下さい：");
    scanf("%d",&c);
    
    d=a;
    if(b<d){
    d=b;}
    if(c<d){
    d=c;}
     
    printf("最小値は%dです。",d);

    return 0;
}
    
     
    

    

    
