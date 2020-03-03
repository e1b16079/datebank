#include<stdio.h>
int main(void){
    int y;

    printf("年齢の入力：");
    scanf("%d",&y);

    if(y<3){
      printf("3歳未満なので無料です。\n");
    }
    else 
      if(y<=12){
        printf("12歳以下は子供料金で１０００円です。\n");
      }
      else
        if(y<=18){
          printf("18歳以下は学生料金で１５００円です。\n");
        }
        else
          if(y<60){
            printf("60歳未満は大人料金で１８００円です。\n");
          }
          else{
            printf("60歳以上はシニア料金で１０００円です。\n");
          }

   return 0;
}





