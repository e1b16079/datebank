#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5            /* 格納データの最大個数 */

int gStack[STACK_SIZE];         /* データ格納用の配列 */
int gSNum = 0;                  /* 格納データの個数 */

void push(int x) {
  gStack[gSNum]=x;
  gSNum++;
}

int pop(void) {
  int x = gStack[gSNum-1];
        
  gSNum--;
  return x;
}

int main(void) {

  int i, j, k;

  for(i=0;i<4;i++){
    k=i*100+100;
    printf("push(%d)\n",k );
    push(k);
  }                    
 
  for(j=0;j<4;j++){
    printf("pop() %d\n", pop());
  }
  return 0;
}
