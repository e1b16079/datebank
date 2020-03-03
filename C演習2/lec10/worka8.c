#include <stdio.h>

typedef struct complex {
  double real;                      /* 分子 */
  double imag;                      /* 分母 */
}COMPLEX;

void printComplex(COMPLEX c1) {
  if (c1.imag >= 0)
    printf("[%4.1f +%4.1fi]", c1.real, c1.imag);
  else
    printf("[%4.1f -%4.1fi]", c1.real, -c1.imag);
}

  void addComplex(COMPLEX *c1, COMPLEX *c2){
   
  c1->real+=c2->real;
  c1->imag+=c2->imag;

}

  void subComplex(COMPLEX *c1, COMPLEX  c2){
  
  c1->real-=c2.real;
  c1->imag-=c2.imag;

}

int main(void) {

  COMPLEX c1, c2, c3, c4;

  printf("A            B             A + B         A - B           \n");

  while (scanf("%lf %lf %lf %lf",&c1.real, &c1.imag, &c2.real, &c2.imag) != EOF){
  c3=c1;
  c4=c1;
  addComplex(&c3, &c2);
  subComplex(&c4, c2);

  printComplex(c1);
  printComplex(c2);
  printComplex(c3);
  printComplex(c4);
  printf("\n");
  }

  return 0;
}



