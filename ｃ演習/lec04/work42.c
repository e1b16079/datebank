#include<stdio.h>
int main(void){
    int y;

    printf("西暦の入力：");
    scanf("%d",&y);

    if(y%400==0||(y%4==0&&y%100!=0)){
      printf("%d年は閏年です。\n",y);
    }
    else{
      printf("%d年は閏年ではありません。\n",y);
    }

    return 0;
}
