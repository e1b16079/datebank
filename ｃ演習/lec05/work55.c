#include<stdio.h>
int main(void){

    int a, i;
    printf("星の数を入力して下さい：");
    scanf("%d",&a);
    printf("%d:",a);
    
    for(i=1;i<=a;i++){
       if(i%5==0)
         printf("☆");
       else
        printf("★");
    }
    printf(" \n");
    return 0;
}
