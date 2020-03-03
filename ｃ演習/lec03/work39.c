#include<stdio.h>
int main(void){
    int a, b, c, d, flag;

    printf("1番目のデータを入力して下さい：");
    scanf("%d",&a);
    printf("2番目のデータを入力して下さい：");
    scanf("%d",&b);
    printf("3番目のデータを入力して下さい：");
    scanf("%d",&c);
    printf("4番目のデータを入力して下さい：");
    scanf("%d",&d);
 
    flag=0;
    if(a>b){
    flag=1;}
    if(b>c){
    flag=1;}
    if(c>d){
    flag=1;}
    
    if(flag==0){
    printf("データは昇順で入力されています。\n");
    }
    else{
    printf("データは昇順で入力されていません。\n");
    }
    return 0;
}



