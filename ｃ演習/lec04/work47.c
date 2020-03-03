#include<stdio.h>
int main(void){
    int a, b, c, d;

    printf("各試験の点数を入力して下さい。\na：");
    scanf("%d",&a);
    printf("b：");
    scanf("%d",&b);
    printf("c：");
    scanf("%d",&c);

    d=0;
    if(a>=60){
      if(b>=70){
        d=1;
      }
    }
    if(c>=80){
      d=1;
    }
    if(d==1){
      printf("採用です。\n");
    }
    else{
      printf("不採用です。\n");
    }

   return 0;
}
