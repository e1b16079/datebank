#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bstree1.h"

int gShortFormat = 1;

BSTREE_NODE *deleteMinNode(BSTREE_NODE *p, 
                           BSTREE_K_TYPE *min);
BSTREE_NODE *deleteRootNode(BSTREE_NODE *p, 
                            BSTREE_K_TYPE x);


void error(char *msg) {
  fflush(stdout);
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

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

void destroyNode(BSTREE_NODE *del) {
  memset(del, 0, sizeof(BSTREE_NODE));
  free(del);
}

void destroyBSTree(BSTREE_NODE *p) {
  if (p == NULL)
    return;

  destroyBSTree(p->left);
  destroyBSTree(p->right);
  destroyNode(p);
}

BSTREE_NODE *findNode(BSTREE_NODE *p, BSTREE_K_TYPE x) {
  if (p == NULL) {                      /* 規則 A-1 */
    return NULL;
  } else if (p->key == x) {             /* 規則 A-2 */
    return p;
  } else if (p->key > x)  {             /* 規則 A-3 */
    return findNode(p->left, x);
  } else {                              /* 規則 A-4 */
    return findNode(p->right, x);
  }
}

BSTREE_NODE *insertNode(BSTREE_NODE *p, BSTREE_K_TYPE x) {
  if (p == NULL) {                      /* 規則 B-1 */
    p = createNode(x);
  } else if (p->key == x) {             /* 規則 B-2 */
    error("insertNode: 指定キーのノードが含まれています。");
  } else if (p->key > x) {              /* 規則 B-3 */
    p->left = insertNode(p->left, x);
  } else {                              /* 規則 B-4 */
    p->right = insertNode(p->right, x);
  }
  return p;
}

BSTREE_NODE *deleteNode(BSTREE_NODE *p, BSTREE_K_TYPE x) {
  if (p == NULL)                        /* 規則 C-1 */
    error("deleteNode: 指定のキーのノードがありません。");

  if (p->key == x) {                    /* 規則 C-2 */
    return deleteRootNode(p, x);
  } else if (p->key > x) {              /* 規則 C-3 */
    p->left = deleteNode(p->left, x);
    return p;
  } else {                              /* 規則 C-4 */
    p->right = deleteNode(p->right, x);
    return p;
  }
}

BSTREE_NODE *deleteRootNode(BSTREE_NODE *p, 
                            BSTREE_K_TYPE x) {
  BSTREE_NODE *sub;
  BSTREE_K_TYPE min;

  if (isLeafNode(p)) {                  /* 規則 D-1 */
    destroyNode(p);
    return NULL;
  } else if (p->right == NULL) {        /* 規則 D-2 */
    sub = p->left;
    destroyNode(p);
    return sub;
  } else if (p->left == NULL) {         /* 規則 D-2 */
    sub = p->right;
    destroyNode(p);
    return sub;
  } else {                              /* 規則 D-3 */
    p->right = deleteMinNode(p->right, &min);
    p->key = min;
    return p;
  }
}

BSTREE_NODE *deleteMinNode(BSTREE_NODE *p, 
                           BSTREE_K_TYPE *min) {
  BSTREE_NODE *sub;

  if (isLeafNode(p)) {                  /* 規則 E-1 */
    *min = p->key;
    destroyNode(p);
    return NULL;
  } else if (p->left != NULL) {         /* 規則 E-2 */
    p->left = deleteMinNode(p->left, min);
    return p;
  } else {                              /* 規則 E-3 */
    *min = p->key;
    sub = p->right;
    destroyNode(p);
    return sub;
  }
}

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

BSTREE_NODE *inputBSTree(BSTREE_NODE *btree,
                        char *str[], int len, int *end) {
  BSTREE_K_TYPE x;
  int i, n = 0;

  for (i = 0; i < len; i++) {
    if (!strcmp(str[i], "--")) break; /* データの終わり? */
    x = atoi(str[i]);
    if (btree == NULL)
      btree = createNode(x);
    else
      btree = insertNode(btree, x);
    n++;
  }
  *end = n;
  return btree;
}

