#include <stdio.h>
#include <limits.h>

int main(void) {
  char   a = 0;
  short  b = 0;
  int    c = 0;
  long   d = 0;

/* 以降の行を変更する。*/

  printf("型     \tサイズ \t最小値\t\t最大値\n");
  printf("char   \t%d     \t%d  \t\t%d\n",sizeof(a) ,CHAR_MIN ,CHAR_MAX);
  printf("short  \t%d     \t%d  \t%d\n",sizeof(b) ,SHRT_MIN , SHRT_MAX);
  printf("int    \t%d     \t%d  \t%d\n",sizeof(c) ,INT_MIN ,INT_MAX);
  printf("long   \t%d     \t%ld \t%ld\n",sizeof(d) ,LONG_MIN ,LONG_MAX);

/* ここまで行を変更する。*/

  return 0;
}

