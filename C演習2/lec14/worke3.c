#include <stdlib.h>
#include "bitree1.h"

int main(void) {
  /* ノードの定義 */
  BITREE_NODE a = {'A',  NULL, NULL};
  BITREE_NODE b = {'B',  NULL, NULL};
  BITREE_NODE c = {'C',  NULL, NULL};
  BITREE_NODE d = {'D',  NULL, NULL};
  BITREE_NODE e = {'E',  NULL, NULL};
  BITREE_NODE f = {'F',  NULL, NULL};
  BITREE_NODE g = {'G',  NULL, NULL};

/***** 以降の行を変更する *****/

  /* 次にコードを修正・追加し、問題の2分木を作成する */
  a.left  = &b;
  b.left  = &d;
  a.right = &c;
  c.left  = &e;
  c.right = &g;
  e.right = &f;





/***** ここまでの行を変更する *****/

  printBITree(&a, 0);

  return 0;
}

