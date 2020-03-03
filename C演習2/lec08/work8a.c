#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXDATA 100		/* マクロを使うように変更しました。 */

int main(int argc, char *argv[]) {
  char str1[MAXDATA];
  int i, Mlen;

  if (argc < 2) {
    fprintf(stderr, "1つ以上の引数を指定してください。\n");
    exit(1);
  }

  strcpy(str1, argv[1]);
  for (i = 2; i < argc; i++) {
    if (strcmp(argv[i], str1) > 0)
      strcpy(str1, argv[i]);
  }
  
  printf("辞書順で最も大きい文字列は \"%s\" です。\n", str1);
  return 0;
}

