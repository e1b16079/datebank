#include<stdio.h>
#include<math.h>

int gData[100];
int gNum = 0;
int gBunpu[5] = {0};


int inputData(void) {
  int x;

  while (scanf("%d", &x) != EOF){ 
    gData[gNum] = x; 
    gNum++;
  }

  return 0;
}

void distribution(void){
   int i;

   for(i=0;i<gNum;i++){
   if(gData[i]<21){
     gBunpu[0]++;
   }
   else if(gData[i]<41){
     gBunpu[1]++;
   }
   else if(gData[i]<61){
     gBunpu[2]++;
   }
   else if(gData[i]<81){
     gBunpu[3]++;
   }
   else if(gData[i]<101){
     gBunpu[4]++;
   }
  }
return;
}
int main(void) {

  inputData();
  distribution();

  printf(" 1 -  20  %d\n", gBunpu[0]);
  printf("21 -  40  %d\n", gBunpu[1]);
  printf("41 -  60  %d\n", gBunpu[2]);
  printf("61 -  80  %d\n", gBunpu[3]);
  printf("81 - 100  %d\n", gBunpu[4]);
return 0;
}

