#include <stdio.h>
#include <stdlib.h>
#include "bitree1.h"

/* 行きがけ順に２分木をなぞる関数 */
void preOrder(BITREE_NODE *p) {
  if (p == NULL) {
    return;
  }
  printf("%c ", p->value);
  preOrder(p->left);
  preOrder(p->right);
}

/* 通りがけ順に２分木をなぞる関数 */
void inOrder(BITREE_NODE *p) {
  if (p == NULL) {
    return;
  }
  /* (1) 通りがけ順になぞるコードを次に書きます。*/
  inOrder(p->left);
  printf("%c ", p->value); 
  inOrder(p->right);

}

/* 帰りがけ順に２分木をなぞる関数 */
void postOrder(BITREE_NODE *p) {
  if (p == NULL) {
    return;
  }
  /* (2) 帰りがけ順になぞるコードを次に書きます。*/
  postOrder(p->left);
  postOrder(p->right);
  printf("%c ", p->value);
}

/* 以降のコードを変更してはいけません。*/
int main(void) {
  /* ノードの定義 */
  BITREE_NODE a = {'A', NULL, NULL};
  BITREE_NODE b = {'B', NULL, NULL};
  BITREE_NODE c = {'C', NULL, NULL};
  BITREE_NODE d = {'D', NULL, NULL};
  BITREE_NODE e = {'E', NULL, NULL};
  BITREE_NODE f = {'F', NULL, NULL};

  /* 2分木の作成 */
  a.left  = &b;
  a.right = &c;
  b.right = &d;
  d.left  = &f;
  c.right = &e;

  printBITree(&a, 0);

  printf("行きがけ順\t");
  preOrder(&a);
  printf("\n");

  printf("通りがけ順\t");
  inOrder(&a);
  printf("\n");

  printf("帰りがけ順\t");
  postOrder(&a);
  printf("\n");

  return 0;
}

