#include <stdio.h>
#include <stdlib.h>
#include "bitree1.h"

void printSubtree(BITREE_NODE *p) {
  if (p == NULL) {
    printf("_");
    return;
  }
  printf("[ "); 
  printf("%c ", p->value);
  printSubtree(p->left);
  printf(" ");
  printSubtree(p->right);
  printf(" ]");
}

void printBITree(BITREE_NODE *p, int tabs) {
  int i;

  for (i = 0; i < tabs; i++)
    printf("\t");
  printSubtree(p);
  printf("\n"); fflush(stdout);
}
