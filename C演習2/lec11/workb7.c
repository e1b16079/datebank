#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define  ARRAY_SIZE 10

int count(double seq1[], int n, double x) {
  double *p1;
  int count = 0;
  
  for (p1 = seq1; p1 < seq1 + n; p1++) {
    if (*p1 < x) {
      count++;
    }
  }

  return count;
}

double average(double seq1[], int n) {
  double *p1;
  double sum = 0.0;
  
  for (p1 = seq1; p1 < seq1 + n; p1++) {
    sum += *p1;
  }

  return sum/n;
}

double findNear(double seq2[], int n, double x){
  double *p2;
  double near=0.0;

  for (p2=seq2;p2<seq2 + n;p2++){
   if(fabs(x-near)>fabs(x-*p2)){
   near=*p2;
  }
  }
  return near;
  }

int main(int argc, char *argv[]) {
  double data[ARRAY_SIZE];
  double ave, ne;
  int    i, num;

  num = argc - 1;
  if (num <= 0 || num > ARRAY_SIZE) {
    fprintf(stderr, "引数の個数 %d が誤っています。\n", num);
    exit(1);
  }

  for (i = 0; i < num; i++)
    data[i] = atof(argv[i + 1]);

  /* プログラム引数の整数の平均値を計算します */
  ave = average(data, num);
  ne = findNear(data,num,ave);
  
  printf("平均値 %.2f に一番近い値は %.2f です。\n",ave, ne);
  return 0;
}

