#include<stdio.h>/*割算*/
#define KETA 12
int main(void){
    int a[KETA]={0,1,2,3,4,5,6,7,8,9,0,1};
    int x = 365;
    int i, tmp, flag=0;

    tmp=0;
    for(i=0;i<KETA;i++){
    tmp=tmp*10+a[i];
    a[i]=tmp/x;
    tmp=tmp%x;
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
     
