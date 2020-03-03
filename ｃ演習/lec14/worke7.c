#include<stdio.h>
#define KETA 119
#define jou 80
int main(void){
    int a[KETA]={0};
    int i, n, tmp, c=0;

    a[KETA-1]=1;

    for(n=1;n<=jou;n++){
      for(i=KETA-1;i>=0;i--){
        tmp=a[i]*n+c;
        a[i]=tmp%10;
        c=tmp/10;
        }
    printf("%2d!=",n);


    while(a[i]==0&&i<=KETA-2){
       i++;
    }
    while(i<KETA){
       printf("%d",a[i]);
       i++;
    }
    printf("\n");
    }

    return 0;
}

