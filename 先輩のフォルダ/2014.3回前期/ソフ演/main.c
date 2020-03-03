#include <stdio.h>

int countc(const char c, const char *str);

int main(void){
  char c = 'c';
  char a = 'a';
  char A = 'A';
  char *abc = "abc";
  char *ABC = "ABC";
  char *aBA = "aBA";

  printf("%c, %s => %d\n", c, aBA, countc(c, aBA));
  printf("%c, %s => %d\n", a, abc, countc(a, abc));
  printf("%c, %s => %d\n", A, ABC, countc(A, ABC));
  printf("%c, %s => %d\n", a, ABC, countc(a, ABC));
  printf("%c, %s => %d\n", A, abc, countc(A, abc));
  printf("%c, %s => %d\n", c, abc, countc(c, abc));
  printf("%c, %s => %d\n", c, ABC, countc(c, ABC));
  printf("%c, %s => %d\n", a, aBA, countc(a, aBA));
  printf("%c, %s => %d\n", A, aBA, countc(A, aBA));

  //a, b, c以外のアルファベットも扱えるか
  printf("d, abcd => %d\n", countc('d', "abcd"));
  printf("d, abcD => %d\n", countc('d', "abcD"));

  //アルファベット以外の文字も扱えるか
 printf(":, a::d => %d\n", countc(':', "a::d"));
 printf(",, a,,d => %d\n", countc(',', "a,,d"));
 return 0;
}
