#include<stdio.h>
#define KETA 12
int main(void){
    int i, tmp;
    int a[KETA];

    printf("Input: ");
    scanf("%d", &tmp);

    for(i=KETA-1;i>=0;i--){
     a[i]=tmp%10;
     tmp=tmp/10;
    }

    printf("a=");
    for(i=0;i<KETA;i++){
    printf("%d",a[i]);
    }
    printf("\n");
 
    return 0;
}
