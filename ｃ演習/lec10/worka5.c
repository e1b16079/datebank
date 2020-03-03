#include<stdio.h>

  double calcSurface(double a,double b){
  double men;
  men=4*b*a*a;
  return men;
  }


  double calcVolume(double a,double b){
  double tai;
  tai=(4*b*a*a*a)/3;
  return tai;
  }
int main(void){
   double r, pi, men, tai;

   printf("球の半径を入力して下さい：");
   scanf ("%lf", &r);
   printf("円周率を入力して下さい：");
   scanf ("%lf",&pi);

  men=calcSurface(r,pi);
  printf("球の面積は%.2fです\n",men);

  tai=calcVolume(r,pi);
  printf("球の体積は%.2fです\n",tai);
  
  return 0;
}
