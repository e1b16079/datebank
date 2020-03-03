#include<stdio.h>
#define KETA 12
int main(void){
    int x[KETA]={0,0,8,4,2,1,0,3,2,7,6,8};
    int a[KETA];
    int i;

   for(i=0;i<KETA;i++){
    a[i]=x[i];
    }

   printf("a=");
   for(i=0;i<KETA;i++){
   printf("%d",a[i]);
   }
   printf("\n");
   return 0;
}
