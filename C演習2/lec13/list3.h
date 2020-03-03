typedef int LIST_TYPE;       /* 格納データの型 */

struct cell {
  LIST_TYPE   value;         /* セルの値 */
  struct cell *next;         /* 次のセルのアドレス */
};
typedef struct cell LIST_CELL;

extern LIST_CELL gFront;

void error(char *msg);
int inputList(char *str[], int len);
void printList(int tabs);

LIST_CELL *insert(LIST_CELL *pre, LIST_TYPE val);
LIST_TYPE delete(LIST_CELL *pre);
