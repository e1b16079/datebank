#include<stdio.h>
#include<math.h>
int main(void){


  int data[100], i, j, k, l, x, min=0, tmp;

  i=0;
  while (scanf("%d", &x) != EOF) {
    data[i] = x;
    i++;
    printf("%2d ",x);
  }

  for(l=0;l<i-1;l++){
  for(j=l;j<i;j++){
   if(data[min]>data[j]){
    min=j;
   }
  }

  tmp=data[min];
  data[min]=data[l];
  data[l]=tmp;

  printf("\n");
  for(k=0;k<i;k++){
   printf("%2d ", data[k]);
  }
  min=l+1;
  }
  printf("\n");

  return 0;
}
