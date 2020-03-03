#include <stdio.h>

/* (1) int 型のメンバ hh (時) と mm (分) からなる構造体型 time を宣言する */
struct time{

  int hh;
  int mm;

};

/* (2) 構造体型 time に対して TIME という typedef名を宣言する */
typedef struct time TIME;

int main(void) {
  int  m1;                      /* 時刻 t1 の 0 時から分数 */
  int  m2;                      /* 時刻 t2 の 0 時から分数 */
  int  m3;                      /* 時刻 t3 の計算用の分数  */
  int  diff;                    /* 時刻 t1 と t2 との分数の差 (m2 - m1) */

/* (3) TIME型(typedef名)の局所変数 t1, t2, t3 を定義する */

  TIME t1, t2, t3;

/* (4) 時刻 t1 を入力する。*/
  printf("t1 > ");
  scanf("%d %d", &t1.hh, &t1.mm);

/* (5) 時刻 t2 を入力する。*/
  printf("t2 > ");
  scanf("%d %d", &t2.hh, &t2.mm);


  /* 時刻 t1 と t2 を出力する。 */
  printf("t1 %2d:%2d と t2 %2d:%2d は", t1.hh, t1.mm, t2.hh, t2.mm);

/* (6) 時刻 t1 と t2 を比べる。*/
  if ( t1.hh==t2.hh && t1.mm==t2.mm) {
    printf("同じです。\n");
  } else {
    printf("異なります。\n");
  }

/* (7) 時刻 m1 と m2 の分数の差 diff を計算する。*/
  m1 = t1.hh*60 + t1.mm;      /* 時刻 t1 の 0 時から分数を m1 に代入する */
  m2 = t2.hh*60 + t2.mm;      /* 時刻 t2 の 0 時から分数を m2 に代入する */
  diff = m2 - m1;

  printf("t2 と t1 の分数 %3d と %3d の差は %3d 分です。\n", m2, m1, diff);

/* (8) 構造体の代入演算子 = を使って、時刻 t1 を時刻 t3 へコピーする。*/

  t3 = t1;

/* 以降は変更しません。*/
  /* 時刻 t3 に分数 diff を足し、時刻 t2 と等しくなることを確認する。*/
  m3 = t3.hh * 60 + t3.mm + diff;

  t3.hh = m3 / 60;
  t3.mm = m3 % 60;

  printf("t1 %d:%d に %3d 分を足すと t3 %d:%d です。\n", t1.hh, t1.mm, diff, t3.hh, t3.mm);

  return 0;
}

