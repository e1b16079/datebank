#include<stdio.h>
#include<math.h>
int main(void){


  int data[100], i, j, x, min=0;

  i=0;
  while (scanf("%d", &x) != EOF) {
    data[i] = x;
    i++;
    printf("%d ",x);
  }

  for(j=0;j<i;j++){
   if(data[min]>data[j]){
    min=j;
   }
  }

  printf("\n");
  printf("%d個のデータの%d番目の%dが最小値です\n", i, min, data[min]);

  return 0;
}
