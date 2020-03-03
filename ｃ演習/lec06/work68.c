#include<stdio.h>
int main(void){
    int a, b, c = 0, d, e;

    printf("aの値の入力：");
    scanf("%d", &a);
    printf("bの値の入力：");
    scanf("%d", &b);
    e = a;
    d=a;
    while(a%b==0){
    a= a / b;
    c++;
    d=a;
    }
    
    printf("%d = %d^%d*%d\n", e, b, c, d);


    return 0;
}
