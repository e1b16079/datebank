#include<stdio.h>
#include<math.h>

int gData[100];
int gNum = 0;


int inputData(void) {
  int x, i, flag=0;

  while (scanf("%d", &x) != EOF){ 
    for(i=0;i<gNum;i++){
     if(gData[i]==x){
       flag=1;
     }
    }
    if(flag==0){
    gData[gNum] = x; 
    gNum++;
  }
  flag=0;
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
  }
}

int main(void) {

  int x, i, flag=0;

  while (scanf("%d", &x) != EOF){ 
    for(i=0;i<gNum;i++){
     if(gData[i]==x){
       flag=1;
     }
    }
    if(flag==0){
    gData[gNum] = x; 
    gNum++;
  }
  flag=0;
  }

  printData();
  printf("異なるデータ数 %d\n",gNum);
  sort();
  printData();

  return 0;
}
