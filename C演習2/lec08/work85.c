#include <stdio.h>
#include <string.h>

#define MAXDATA 100

int main(void) {
  const char str1[] = "abcd";
  const char str2[] = "123456" ;
  char str3[MAXDATA] = "";

  /* (1) 文字列 str1 と str2 の長さと値を出力します。*/
  printf("文字列 str1 の長さは %2d で値は %s です。\n", strlen(str1), str1);
  printf("文字列 str2 の長さは %2d で値は %s です。\n", strlen(str2), str2);

  /* (2) 文字列 str1 を str3 にコピーします。*/
  strcpy(str3,str1);

  /* (3) 文字列 str3 の長さと値を出力します。*/
  printf("文字列 str3 の長さは %2d で値は %s です。\n", strlen(str3), str3);

  printf("--------------------\n");

  /* (4) 文字列 str2 を文字列 str3 に連結します。*/
  strcat(str3,str2);

  /* (5) 文字列 str3 の長さと値を出力します。(3) と同じです。 */
  printf("文字列 str3 の長さは %2d で値は %s です。\n", strlen(str3), str3);

  printf("--------------------\n");

  /* (6) 文字列 str1 を文字列 str3 に連結します。*/
  strcat(str3,str1);

  /* (7) 文字列 str3, str1, str2 の長さと値を出力します。*/
  printf("文字列 str3 の長さは %2d で値は %s です。\n", strlen(str3), str3);
  printf("文字列 str1 の長さは %2d で値は %s です。\n", strlen(str1), str1);
  printf("文字列 str2 の長さは %2d で値は %s です。\n", strlen(str2), str2);

  return 0;
}

