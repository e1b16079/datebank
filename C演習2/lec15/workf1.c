#include <stdio.h>
#include "bstree1.h"

int main(void) {
  /* ２分探索木のルートを指すポインタ */
  BSTREE_NODE* root;

  /* ノードの定義 */
  BSTREE_NODE n2  =  {2, 0, NULL, NULL};
  BSTREE_NODE n5  =  {5, 0, NULL, NULL};
  BSTREE_NODE n7  =  {7, 0, NULL, NULL};
  BSTREE_NODE n8  =  {8, 0, NULL, NULL};
  BSTREE_NODE n9 =   {9, 0, NULL, NULL};

  /***** 2分探索木の作成 *****/
  /* キー 8 のノード n8 をルートにする */
  root = &n8;
  printBSTree(root, 0, 1);

/**** 以降を修正する ****/

  /* キー 9 のノード n9 を挿入 */
  n8.right      = &n9;
  printBSTree(root, 0, 1);

  /* キー 5 のノード n5 を挿入 */
  n8.left      = &n5;
  printBSTree(root, 0, 1);

  /* キー 2 のノード n2 を挿入 */
  n5.left      = &n2;
  printBSTree(root, 0, 1);

  /* キー 7 のノード n7 を挿入 */
  n5.right      = &n7;
  printBSTree(root, 0, 1);

/**** ここまで修正する ****/

  return 0;
}

