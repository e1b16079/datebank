#include<stdio.h>
int main(void){
    int prin;
    double rate;
    int x;
    printf("元金（単位：円）:");
    scanf("%d",&prin);
    
    printf("利率（単位：%%）:");
    scanf("%lf",&rate);

    x=prin*(rate/100);
    printf("1年後の預金額は%d円です。\n",prin+x);
    
    prin=prin+x;
    x=prin*(rate/100);
    printf("2年後の預金額は%d円です。\n",prin+x);
    
    prin=prin+x;
    x=prin*(rate/100);
    printf("3年後の預金額は%d円です。\n",prin+x);

    return 0;
}

