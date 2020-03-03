typedef int POSITION;           /* 位置を示す値の型 */
typedef int LIST_TYPE;          /* 格納データの型 */

void error(char *s);
void initList(void);
int isListEmpty(void);
int isListFull(void);
int listLength(void);
void insert(POSITION n, LIST_TYPE x);
void append(LIST_TYPE x);
LIST_TYPE retrieve(POSITION n);
LIST_TYPE replace(POSITION n, LIST_TYPE new);
LIST_TYPE delete(POSITION n);
void printList(int tabs);

