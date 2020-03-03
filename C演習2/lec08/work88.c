#include <stdio.h>
#include <stdlib.h>

#define  ARRAY_SIZE 10

double calcSum(double seq1[], int n) {
  double *p1;
  double sum = 0.0;
  
  for (p1 = seq1; p1 < seq1 + n; p1++)
    sum += *p1;
  return sum;
}

double average(double seq1[], int n){
  double *p1, sum;
  
  sum = calcSum(seq1,n);
  return sum/n;
  }

int count(double seq1[], int n, double x){
  double *p1,c=0;

  for(p1 = seq1; p1 < seq1 + n; p1++){
   if(x>*p1){
     c++;
   }
  }
  return c;
} 

int main(int argc, char *argv[]) {
  double data[ARRAY_SIZE];
  double ave;
  int    i, num,cou=0;

  num = argc - 1;
  if (num <= 0 || num > ARRAY_SIZE) {
    fprintf(stderr, "引数の個数 %d が誤っています。\n", num);
    exit(1);
  }

  for (i = 0; i < num; i++) {
    data[i] = atof(argv[i + 1]);
  }

  ave = average(data,num);
  cou = count(data,num,ave);
  printf("平均値 %.2f 未満の値は %d 個あります。\n",ave,cou); 
    
   return 0;
}

