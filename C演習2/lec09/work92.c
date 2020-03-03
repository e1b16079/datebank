#include <stdio.h>

/* (1) 次のメンバをもつ構造体型 aaa を宣言する。
  double 型のメンバ xxx
  int    型のメンバ yyy  
*/
  struct aaa{
   double xxx;
   int yyy;
  };



int main(void) {
  /* (2) 構造体型 aaa の変数 a1 を定義する。
     メンバxxxの初期値は 6.9 で、メンバyyyの初期値は 2017。*/
  struct aaa a1 = {6.9, 2017};

  /* (3) 構造体型 aaa の変数 a2 を定義する。
     メンバxxxの初期値は 96.26 で、メンバyyyの初期値は指定しない。*/
  struct aaa a2 = {96.26};

  /***** 以降は変更しない。*****/  
  printf("a1: %.2f, %d\n", a1.xxx, a1.yyy);
  printf("a2: %.2f, %d\n", a2.xxx, a2.yyy);

  return 0;
}

