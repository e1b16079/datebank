#include <strings.h>
#include <ctype.h>

int countc(const char c, const char *str){
  int cnt =0;
  char ch;

  //大文字を小文字に変換します． 
  ch = tolower(c);
  while(*str != '\0'){
    if(ch = tolower(*str)){
      cnt++;
    }
    *str++;
  }
  return cnt;
}
