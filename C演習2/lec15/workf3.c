#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "bstree1.h"

/* ２９２ページを参照してfindNode関数を完成し、更に必要な出力文を追加します。*/
BSTREE_NODE *findNode(BSTREE_NODE *p, BSTREE_K_TYPE x) {
  if (p == NULL) {
    printf("規則 A-1\t"); 
    return NULL;
  } else if (p->key == x) {
    printf("規則 A-2\t"); 
    return p;
  }
  else if (p->key > x)  {
    printf("規則 A-3\t");
    printBSTree(p->left, 0, 1);         
    return findNode(p->left, x);
  } else { 
    printf("規則 A-4\t");
    printBSTree(p->right, 0, 1);                         
    return findNode(p->right, x);
  }

}

int main(int argc, char *argv[]) {
  BSTREE_NODE *result;
  BSTREE_K_TYPE x;

  /* ２分探索木のルートを指すポインタ */
  BSTREE_NODE* root;

  /* ノードの定義 */
  BSTREE_NODE n3  =  { 3, 0, NULL, NULL};
  BSTREE_NODE n4  =  { 4, 0, NULL, NULL};
  BSTREE_NODE n5  =  { 5, 0, NULL, NULL};
  BSTREE_NODE n9  =  { 9, 0, NULL, NULL};
  BSTREE_NODE n11 =  {11, 0, NULL, NULL};

  /* 2分探索木の作成 */
  /* キー 9 のノード n9 を挿入 */
  root = &n9;
  /* キー 11 のノード n11 を挿入 */
  n9.right  = &n11;
  /* キー 4 のノード n4 を挿入 */
  n9.left   = &n4;
  /* キー 3 のノード n3 を挿入 */
  n4.left    = &n3;
  /* キー 5 のノード n5 を挿入 */
  n4.right  = &n5;

  printf("入力データ ");
  printBSTree(root, 1, 1);

  if (argc < 2 ) {
    error("引数が指定されていません。");
  }

  x = atoi(argv[1]);
  result = findNode(&n9, x);
  printf("\n探索結果 ");
  printBSTree(result, 1, 1);

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

