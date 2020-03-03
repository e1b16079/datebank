#include <stdio.h>

/* int 型とメンバ hh (時) と mm (分) からなる構造体型 time を宣言する */
typedef struct time {
  int hh;
  int mm;
} TIME;

/* (1) 時刻 t1 の 0 時からの分数を返す */
int calcMinutes(TIME t1) {

  return t1.hh*60 + t1.mm;
}

/* (2) 0 時からの分数 mm に対応する時刻を返す */
TIME calcTime(int mm) {
  TIME p1;

  p1.hh=mm/60;
  p1.mm=mm%60;

  return p1;
}

/* (3) 時刻 t1 に分数 mm を加えた時刻を返す */
TIME addMinutes(TIME t1, int mm) {

   return calcTime(calcMinutes(t1)+mm);
  
}

/* (4) 時刻 t1 と時刻 t2 の差（分数）を返す */
int subTime(TIME *t1, TIME *t2) {

  return (t2->hh*60 + t2->mm)-(t1->hh*60 + t1->mm);

}

int main(void) {
/* TIME型(typedef名)の局所変数 t1, t2, t3 を定義する */
  TIME t1, t2, t3;

  int  diff;                    /* 時刻 t1 と t2 との分数の差 */

/* 時刻 t1 を入力する。*/
  printf("t1 > ");
  scanf("%d %d", &t1.hh, &t1.mm);

/* 時刻 t2 を入力する。*/
  printf("t2 > ");
  scanf("%d %d", &t2.hh, &t2.mm);


/* 時刻 t1 と t2 を出力する。 */
  printf("t1 %2d:%2d と t2 %2d:%2d は", t1.hh, t1.mm, t2.hh, t2.mm);

/* (5) subTime 関数を使って、時刻 t1 と t2 を比べる。*/
  if (subTime(&t1, &t2)==0) {
    printf("同じです。\n");
  } else {
    printf("異なります。\n");
  }

/* (6) subTime 関数を使って、時刻 t1 と t2 の差 diff を計算する。*/
  diff =subTime(&t1, &t2); 

  printf("t2 と t1 の差は %3d 分です。\n", diff);

/* 構造体の代入演算子 = を使って、時刻 t1 を時刻 t3 へコピーする。*/
  t3 = t1;

/* (7) addMinutes 関数を使って、時刻 t3 に分数 diff を足し、時刻 t2 と等しくなることを確認する。*/
  t3 = addMinutes(t3, diff);

  printf("t1 %d:%d に %3d 分を足すと t3 %d:%d です。\n", t1.hh, t1.mm, diff, t3.hh, t3.mm);

  return 0;
}

