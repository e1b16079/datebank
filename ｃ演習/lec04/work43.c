#include<stdio.h>
int main(void){
    int m, p;

    printf("数学の成績を入力して下さい：");
    scanf("%d",&m);
    printf("物理の成績を入力して下さい：");
    scanf("%d",&p);

    if(m>=60){
      if(m+p>=120){
        printf("あなたは合格です\n");
      }
      else{
      printf("あなたは不合格です\n");
      }
    }else{
      printf("あなたは不合格です\n");
      }
      
    return 0;
}
