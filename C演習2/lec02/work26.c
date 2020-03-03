#include <stdio.h>

int gData[100];
int gNum = 0;


int inputData(void) {
  int x;

  while (scanf("%d", &x) != EOF) 
    gData[gNum] = x; 
    gNum++;
  }

  return 0;
}


/* 関数原型宣言 */
int sum(void);
double average(void);


int main(void) {
  double ave; 
  inputData();   

  if (gNum > 0) {

    ave = average();
      
    printf("標本数 %3d 平均値 %.2f\n", gNum, ave);
  }

 return 0;
}



int sum(void) {
  int i, s = 0;
  
  for (i = 0; i < gNum; i++) {
    s = s + gData[i];
  }

  return s;
}


double average(void){
  int s;
  double ave;
   s = sum();
   ave=(double)s/gNum;

  return ave;
}



