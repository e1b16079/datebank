#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "bstree1.h"

BSTREE_NODE *createNode(BSTREE_K_TYPE x) {
  BSTREE_NODE *new;

  new = malloc(sizeof(BSTREE_NODE));
  if (new == NULL)
    error("createNode: メモリがありません。");
  new->key = x;
  new->value = 0;
  new->left = NULL;
  new->right = NULL;
  return new;
}

/* ２９５ページを参照してinsertNode関数を完成し、更に必要な出力文を追加します。*/
BSTREE_NODE *insertNode(BSTREE_NODE *p, BSTREE_K_TYPE x) {
  if (p == NULL) {
    printf("  規則 B-1\t");  printBSTree(p, 0, 1);
    p = createNode(x);
  } else if (p->key == x) {
    printf("  規則 B-2\n"); 
    error("insertNode: 指定キーのノードが含まれています。");
  }
   else if (p->key > x) {              
   printf("  規則 B-3\t");
   printBSTree(p->left, 0, 1);
   p->left = insertNode(p->left, x);
  } else {                             
   printf("  規則 B-4\t");
   printBSTree(p->right, 0, 1);
    p->right = insertNode(p->right, x);
  }
  return p;
}

int main(int argc, char *argv[]) {
  BSTREE_NODE *bstree = NULL;
  BSTREE_K_TYPE x;
  int i;

  if (argc < 2 ) {
    error("引数が指定されていません。");
  }

  for (i = 1; i < argc; i++) {
    x = atoi(argv[i]);
    printf("insertNode(%d)\n", x);
    bstree = insertNode(bstree, x);
    printf("  挿入(%d) ", x);
    printBSTree(bstree, 1, 1);
  }

  return 0;
}

int gShortFormat = 1;

int isLeafNode(BSTREE_NODE *p) {
  return (p->left == NULL) && (p->right == NULL);
}

void printSubBSTree(BSTREE_NODE *p) {
  if (p == NULL) {
    printf("_");
    return;
  }
  if (gShortFormat != 0 && isLeafNode(p)) {
    printf("%d", p->key);
  } else {
    printf("[ ");
    printf("%d ", p->key);
    printSubBSTree(p->left);
    printf(" ");
    printSubBSTree(p->right);
    printf(" ]");
  }
}

void printBSTree(BSTREE_NODE *p, int tabs, int brief) {
  int i;

  gShortFormat = brief;
  for (i = 0; i <tabs; i++)
    printf("\t");
  printSubBSTree(p);
  printf("\n"); fflush(stdout);
}

void error(char *msg) {
  fflush(stdout);
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

