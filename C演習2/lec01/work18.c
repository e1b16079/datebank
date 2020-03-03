#include<stdio.h>
#include<math.h>
int main(void){


  int data[100], i, j, k, x, min=0, tmp;

  i=0;
  while (scanf("%d", &x) != EOF) {
    data[i] = x;
    i++;
    printf("%2d ",x);
  }

  for(j=0;j<i;j++){
   if(data[min]>data[j]){
    min=j;
   }
  }

  tmp=data[min];
  data[min]=data[0];
  data[0]=tmp;

  printf("\n");
  for(k=0;k<i;k++){
   printf("%2d ", data[k]);
  }
  printf("\n");

  return 0;
}
