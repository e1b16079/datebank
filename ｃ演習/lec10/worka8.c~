#include<stdio.h>

  int checkYear(int y){
    int re=0;
    if(y%400==0||(y%4==0&&y%100!=0)){
      re=1;
    }
   return re;
}
int main(void){
   int a, b, i, re, cnt=0;

    printf("西暦を入力して下さい：");
    scanf("%d",&a);
    printf("西暦を入力して下さい：");
    scanf("%d",&b);

    for(i=a;i<=b;i++){
    re=0;
    re = checkYear(i);
    if(re==1){
    printf("%d年",i);
    cnt++;
    printf("\n");
    }
    }

    printf("閏年は%d回あります。\n",cnt);

   return 0;
}

