#include <stdio.h>

typedef struct fraction {
  int num;                      /* 分子 */
  int den;                      /* 分母 */
}FRACTION;

FRACTION addFraction(FRACTION  f1, FRACTION  f2){
  FRACTION f3;

  f3.num = f1.num*f2.den + f2.num*f1.den;
  f3.den = f1.den*f2.den;

  return f3;
}

FRACTION subFraction(FRACTION *f1, FRACTION *f2){
  FRACTION f4;

  f4.num = f1->num*f2->den - f2->num*f1->den;
  f4.den = f1->den*f2->den;

  return f4;
}

void printFraction(FRACTION f1) {
  printf("%d/%d", f1.num, f1.den);
}

int main(void) {
  FRACTION f1, f2, f3, f4;

  printf("> x/y ");
  scanf("%d %d", &f1.num, &f1.den); 

  printf("> x/y ");
  scanf("%d %d", &f2.num, &f2.den); 

  f3 = addFraction(f1,f2);
  f4 = subFraction(&f1,&f2);

  printFraction(f1);
  printf(" + ");
  printFraction(f2);
  printf(" = ");
  printFraction(f3);
  printf("\n");

  printFraction(f1);
  printf(" - ");
  printFraction(f2);
  printf(" = ");
  printFraction(f4);
  printf("\n");

  return 0;
}

