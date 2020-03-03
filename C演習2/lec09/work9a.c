#include <stdio.h>
#include <math.h>

struct rgbl{ 
  int red;
  int green;
  int blue;
  double lum;
};

int main(void) {

  struct rgbl c1; /*入力値*/
  struct rgbl c2={0,0,0,0}; /*最大値*/

  int i=1 ,max=0;

  while (scanf("%d%d%d",&c1.red ,&c1.green ,&c1.blue) != EOF) {

   c1.lum = 0.299*c1.red+0.587*c1.green+0.114*c1.blue;
   printf("%d (%4d%4d%4d)          %.2f\n",i ,c1.red ,c1.green ,c1.blue ,c1.lum);

   if(c1.lum>c2.lum){
    max=i;
    c2=c1;
   }
   i++;
   }

   printf("------------------\n");

  printf("%d番目の色(%d %d %d)の輝度%.2fが最大値です。\n",max ,c2.red ,c2.green ,c2.blue ,c2.lum);

  return 0;
}
