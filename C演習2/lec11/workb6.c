#include <stdio.h>
#include <stdlib.h>

void pinc(int *x, int d){

  *x+=d;

}


int main(int argc, char *argv[]){

  int x, d, c=1;

  x=atoi(argv[1]);
  d=atoi(argv[2]);
  printf("   0 %4d %4d\n" , x, d);
 while(x<20){
  pinc(&x,d);
  printf("%4d %4d %4d\n" ,c, x, d);
  c++;
  }

  return 0;
}
