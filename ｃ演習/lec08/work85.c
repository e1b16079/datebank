#include<stdio.h>
int main(void){

   int a[10] = {32,15,48,55,9,16,78,1,23,60};
   int sum=0, i;
   double ave;

   for(i=0;i<10;i++){
   sum = sum + a[i];
  }
   ave = (double)sum/10;

   printf("総和：%d\n",sum);
   printf("平均：%f\n",ave);

   return 0;
}
