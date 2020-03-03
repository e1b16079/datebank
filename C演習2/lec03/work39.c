#include<stdio.h>
#include<math.h>

int gData[100];
int gNum = 0;


int inputData(void) {
  int x;

  while (scanf("%d", &x) != EOF){ 
    gData[gNum] = x; 
    gNum++;
  }

  return 0;
}


void printData(void){
  int k;

  for(k=0;k<gNum;k++){
   printf("%3d",gData[k]);
  }
  printf("\n");
  return ;
}


void sort(void){
  int i, j, k, tmp;
  for(i=1;i<gNum;i++){
   for(j=0;j<i;j++){
    if(gData[j]>gData[i]){
      tmp=gData[i];
      for(k=i;k>j;k--){
      gData[k]=gData[k-1];
      }
    gData[j]=tmp;
     }
   }
  printData();
  }
}

int main(void) {

  inputData();
  printData();
  sort();

  return 0;
}
