#include <stdio.h>
typedef struct rgbl {
  double red;                      
  double green;
  double blue;
  double lum;                      
}RGBL;

void calcLum(RGBL *c1){
