#include<stdio.h>/*かけ算*/
#define KETA 12
int main(void){
    int a[KETA]={0,0,0,1,0,2,4,6,5,5,3,6};
    int x = 512;
    int i, tmp, age=0, flag=0;

    for(i=KETA-1;i>=0;i--){
    tmp=a[i]* x +age;
    a[i]=tmp%10;
    age=tmp/10;
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
    
