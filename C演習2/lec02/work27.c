#include<stdio.h>
#include<math.h>

int gData[100];
int gNum = 0;


double sqrt(double x);

double pow(double x, double n);


int inputData(void) {
  int x;

  while (scanf("%d", &x) != EOF){ 
    gData[gNum] = x; 
    gNum++;
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


double variance(void){
  double ave, sum, x, y, z;
  int i;
  ave= average();
  for(i=0;i<gNum;i++){
   z = (double)gData[i] - ave;
   x = pow(z, 2);
   sum = sum + x;
  }

  y = sum / gNum;

  return y;
}


int main(void) {
  double ave, var, s; 
  
  inputData();   

  if (gNum > 0) {

    ave = average();
    var = variance();
    s = sqrt(var);

    printf("標本数 %3d 平均値 %.2f 標本分散 %.2f 標本標準偏差 %.2f\n", gNum, ave, var, s);
  }

 return 0;
}

