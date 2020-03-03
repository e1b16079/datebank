typedef char BITREE_TYPE;       /* 格納データの型 */

struct node {
BITREE_TYPE value;              /* ノードの値 */
struct node *left;               /* 左ノードのアドレス */
struct node *right;              /* 右ノードのアドレス */
};

typedef struct node BITREE_NODE;

void printBITree(BITREE_NODE *p, int tabs);
