#include<stdio.h>
int main(void){

    int day;

    printf("１ヶ月間に使用する日数を入力して下さい：");
    scanf("%d",&day);

    if(day*460>9000)
      printf("%d日分では、定期券の方がお得です。\n",day);
    else
      printf("%d日分では、往復切符の方がお得です。\n",day);
    
    return 0;

}
