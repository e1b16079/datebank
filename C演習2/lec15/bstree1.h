typedef int BSTREE_K_TYPE;      /* キーの型 */
typedef int BSTREE_V_TYPE;      /* 格納データの型 */

struct bsnode {
  BSTREE_K_TYPE key;            /* ノードのキー */
  BSTREE_V_TYPE value;          /* ノードの値 */
  struct bsnode *left;          /* 左ノードのアドレス */
  struct bsnode *right;         /* 右ノードのアドレス */
};
typedef struct bsnode BSTREE_NODE;

void error(char *msg);
void destroyBSTree(BSTREE_NODE *p);
BSTREE_NODE *insertNode(BSTREE_NODE *p, BSTREE_K_TYPE x);
BSTREE_NODE *findNode(BSTREE_NODE *p, BSTREE_K_TYPE x);
BSTREE_NODE *deleteNode(BSTREE_NODE *p, BSTREE_K_TYPE x);
int isLeafNode(BSTREE_NODE *p);
void printBSTree(BSTREE_NODE *p, int tabs, int brief);
BSTREE_NODE *inputBSTree(BSTREE_NODE *btree,
                         char *str[], int len, int *end);
