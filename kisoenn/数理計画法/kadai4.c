#include<stdio.h>
#include <time.h>

int main(void){
  int n=8;
  int a[10]={2,4,6,8,10,12,14,16,18,20};
  int b[8]={1,3,5,7,11,13,17,19};
  int x;
  int i=0,j=0;

  while(j!=n){
    if(a[i]<b[j]){
      x=a[i];
      b[j]=b[j]-a[i];
      printf("x[%d][%d]=%d\n",i,j,x);
      i++;
    }
    if(a[i]>b[j]){
      x=b[j];
      a[i]=a[i]-b[j];
      printf("x[%d][%d]=%d\n",i,j,x);
      j++;
    }
    if(a[i]==b[j]){
      x=b[j];
      printf("x[%d][%d]=%d\n",i,j,x);
      i++;
      j++;
    }
}
    return 0;
  

    }
