#include<stdio.h>
int main(void){

    int a, c=0, i=0;

    printf("区切り幅の入力：");
    scanf("%d", &a);

    if(a==0){
    }
    else{ while(c<15){
      if(a-i==0){
       printf("☆");
      i=0;
      }
      else{
       printf("%d", a-i);
       c++;
       i++;
      }}
    }
    printf("\n");
    return 0;
}
    
