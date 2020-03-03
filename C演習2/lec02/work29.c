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
  int i, j, tmp, c=1;
  for(i=0;i<gNum-1;i++){
   for(j=0;j<gNum-c;j++){
    if(gData[j]>gData[j+1]){
      tmp=gData[j];
      gData[j]=gData[j+1];
      gData[j+1]=tmp;
     }
   }
  c++;
  printData();
  }
}

int main(void) {

  inputData();
  printData();
  sort();

  return 0;
}
