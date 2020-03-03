#include<stdio.h>/*足し算*/
#define KETA 12
int main(void){
    int a[KETA]={0,0,8,6,4,2,0,9,7,5,3,1};
    int b[KETA]={0,0,8,4,2,1,0,3,2,7,6,8};
    int c[KETA];
    int i, age=0, flag=0;

    for(i=KETA-1;i>=0;i--){
    c[i]=a[i]+b[i];
    
    if(age==1){
    c[i]=c[i]+1 ;
    age=0;
    }
    
    if(c[i]>=10){
    age=1;
    c[i]=c[i]-10;
    }
    }

    printf("c=");
    for(i=0;i<KETA;i++){
     if(c[i]!=0){
      flag=1;
     }
     if(flag==1){
     printf("%d",c[i]);
     }
     }
     
     if(flag==0){
     printf("0");
     }

     printf("\n");
    
     return 0;
}
