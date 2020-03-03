#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int inputData(void) {
  int x;

  while (scanf("%d", &x) != EOF) { 
    gList[gLNum] = x;               
    gLNum++;
  }

  return 0;
}



void sort(void) {
  int I, J, n, tmp;

  for (I = 1; I < gLNum; I++) {

    
    if (gList[I - 1] > gList[I]) {

      
      for (J = 0; 0 <= I-1; J++) {
        if (gList[I] <= gList[J]) break;
      }

      tmp = gList[I];
      
      for (n = I; n > J; n--) {
        gList[n] = gList[n - 1];
      }

      
      gList[J] = tmp;
    }

    printList(1);
  }
}

int main(void){

  inputData();
  
  printList(1);

  sort();

  printList(1);

  return 0;
}

