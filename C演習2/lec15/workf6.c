#include <stdio.h>
#include <stdlib.h>
#include "bstree1.h"

void printBetween(BSTREE_NODE *p, BSTREE_K_TYPE start, BSTREE_K_TYPE end)
  if(p==NULL){
   return ;
  }
  printBetween(p->left,start,end);
  if(p->key>=start&&p->key<=end){
  printf("%3d",p->key);
  }
  printBetween(p->left,start,end);
  }


int main(int argc, char *argv[]) {
  BSTREE_NODE *bstree = NULL;
  BSTREE_K_TYPE x,y;
  int n1;

  bstree = inputBSTree(bstree, &argv[1], argc - 1, &n1);
  if (n1 < 1 || argc - 1 - n1 != 2)
    error("引数の指定法:  整数1 整数2 ... -- X");
  printf("入力データ "); printBSTree(bstree, 0, 1);
  printf("\n");

  x = atoi(argv[n1 + 2]);
  y = atoi(argv[n1 + 3]);

  printf("printBetween(%d,%d)==>", x,y);

  printBetween(bstree,x,y);
  printf("\n");
  
  destroyBSTree(bstree);
  return 0;
}

