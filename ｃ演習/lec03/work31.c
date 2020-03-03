#include<stdio.h>
int main(void){
    int a;
    
    printf("数値を入力して下さい：");
    scanf("%d",&a);

    if(a%3==0)
      printf("%dは3の倍数です。\n",a);
    else
      printf("%dは3の倍数ではありません。\n",a);

    return 0;
}
