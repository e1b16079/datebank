#include <stdio.h>
#include <stdlib.h>
#include "bitree2.h"

BITREE_TYPE sumValue(BITREE_NODE *p) {
  BITREE_TYPE l, r;

  if (p == NULL)
    return 0;
  l = sumValue(p->left);
  r = sumValue(p->right);
  return p->value + l + r;
}

int size(BITREE_NODE *p){
  int c=0;
 if (p == NULL) {
    return;
  }
  c++;
  size(p->left);
  size(p->right);

  return c;
}

int main(int argc, char *argv[]) {
  BITREE_NODE *root;
  int n1;
  BITREE_TYPE result;

  root = inputBITree(&argv[1], argc - 1, &n1);
  if (n1 < 1)
    error("引数の指定法: 2分木データ");
  printf("入力データ "); printBITree(root, 0, 0);

  result = size(root);
  printf(" ==> %d 個のノードを含みます。。\n", result);

  result = size(root->left);
  printf(" ==> 左部分木は %d 個のノードを含みます。\n", result);

  result = size(root->right);
  printf(" ==> 右部分木は %d 個のノードを含みます。\n", result);

  destroyBITree(root);
  return 0;
}

