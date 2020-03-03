#include <stdio.h>
#include <stdlib.h>
#include "bstree1.h"

void printInDesc(BSTREE_NODE *p){
   if(p==NULL){
   return ;
}
printInDesc(p->right);
printf("%3d",p->key);
printInDesc(p->left); 

}




int main(int argc, char *argv[]) {
  BSTREE_NODE *bstree = NULL;
 
  int n1;

  bstree = inputBSTree(bstree, &argv[1], argc - 1, &n1);
  if (n1 < 1)
    error("引数の指定法:  整数1 整数2 ... -- X");
  printf("入力データ "); printBSTree(bstree, 0, 1);


    printf(" ==>");
    printInDesc(bstree);
    printf("\n");
    destroyBSTree(bstree);
  return 0;
}

