#include<stdio.h>
#define KETA 12
int main(void){
    int i, tmp, flag=0;
    int a[KETA];

    printf("Input: ");
    scanf("%d", &tmp);

    for(i=KETA-1;i>=0;i--){
     a[i]=tmp%10;
     tmp=tmp/10;
    }

    printf("a=");
    for(i=0;i<KETA;i++){
     if(a[i]!=0){
      flag=1;
     }
     if(flag==1){
     printf("%d",a[i]);
     }
     }
     
     if(flag==0){
     printf("0");
     }

     printf("\n");
    
     return 0;
}
