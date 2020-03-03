#include <stdio.h>
#include <string.h>

#define MAXDATA 100

int main(void) {
  char str1[MAXDATA], str2[MAXDATA];
  char outbuf[MAXDATA * 2];     /* 判定結果のメッセージ保存用 */
  int result;                   /* 判定結果の格納用の変数 */

  printf("> ");
  scanf("%s %s", str1, str2);   /* ２つの文字列を入力します。 */

  strcpy(outbuf, str1);
  strcat(outbuf, " は ");
  strcat(outbuf, str2);

  /* ここまでの処理で配列 outbuf にどのような文字列が格納されましたか？ */

  /* ここから修正します。なお、配列str1とstr2に格納されている値を変更してはいけません。*/
  result = strcmp(str1,str2);
  if(result > 0){
   strcat(outbuf,"より大きい" );
  }else if(result==0){
   strcat(outbuf, "等しい");
  }else{
   strcat(outbuf, "より小さい");
  }



  /* ここまで修正します。*/

  printf("%s\n", outbuf);       /* ２つの文字列の判定結果を出力します。 */

  return 0;
}

