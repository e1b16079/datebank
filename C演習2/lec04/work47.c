#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef int STACK_TYPE;         /* スタック要素の型 */

#define STACK_SIZE 5            /* 格納データの最大個数 */

STACK_TYPE gStack[STACK_SIZE];  /* データ格納用の配列 */
int gSNum = 0;                  /* 格納データの個数 */

void error(char *s) {
  fflush(stdout);
  fprintf(stderr, "\n%s\n", s);
  exit(1);
}

void initStack(void) {
  gSNum = 0;
}

int isStackEmpty(void) {
  return gSNum == 0;
}

int isStackFull(void) {
  return gSNum == STACK_SIZE;
}

void push(STACK_TYPE x) {
  if (isStackFull())
    error("push: スタックはフル状態です。");

  gStack[gSNum] = x;
  gSNum++;
}

STACK_TYPE pop(void) {
  STACK_TYPE x;

  if (isStackEmpty())
    error("pop: スタックは空状態です。");

  x = gStack[gSNum - 1];
  gSNum--;
  return x;
}

void printStack(int tabs) {
  int i;

  for (i = 0; i < tabs; i++) printf("\t");
  printf("STACK[");
  for (i = 0; i < gSNum; i++) {
    printf("%d",  gStack[i]);
    if (i != gSNum - 1) printf(" ");
  }
  printf("]\n"); fflush(stdout);
}

int main(int argc, char *argv[]) {
  STACK_TYPE x, a, b, r;
  int c;
  int i;

  initStack();

  for (i = 1; i < argc; i++) {
    c = argv[i][0];             /* i 番目のプログラム引数の先頭の１文字を得る */

    /* 文字 c が数字かを調べる */
    if (isdigit(c)) {
      if (isStackFull()) error("main: スタックはフル状態です。");
      /*  文字 c が数字の場合はその値を整数に変換しプッシュする */
      x = c - '0';
      push(x);

    /* 文字 c が数字ではなく、つまり演算子の場合の処理をする */
    } else {
      /* (1) スタックより値をポップし、変数 a と b に代入する。 */
     a=pop();
     b=pop();

      /* 演算子 c の文字によって分岐する */
      switch (c) {
      case '+':
        /* 変数 b と a を足した値を変数 r に代入する */
        r = b + a;
        printf("%d + %d = %d\n", b, a, r); /*  */

        break;
      case '-':
        /* (2) 変数 b から a を引いた値を変数 r に代入する */
         r = b - a;
        printf("%d - %d = %d\n", b, a, r);

        break;
      case '*':
        /* (3) 変数 b と a をかけた値を変数 r に代入する */
        r = b * a;
        printf("%d * %d = %d\n", b, a, r);

        break;
      case '/':
        /* (4) 変数 b を a で割った値を変数 r に代入する */
        r = b / a;
        printf("%d / %d = %d\n", b, a, r);

        break;
      default:
        fprintf(stderr,"不正な文字 %c がありました。\n", c);
        exit(1);
      }

      /* (5) 変数 r の値をスタックへプッシュする */
      push(r);
    }
  }

  if (!isStackEmpty()) {
    printf("式の値は%dです。\n", pop());
  }
  return 0;
}

