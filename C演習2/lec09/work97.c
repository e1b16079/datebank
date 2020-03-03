#include <stdio.h>
#include <math.h>

/* (1) 点(x, y)を表す構造体型pointを宣言する。メンバxとyの型はdoubleとする。 */
struct point{

  double x;
  double y;
};

double distance(double x0, double y0, double x1, double y1){
  double x, y, ab;

  x=x1-x0;
  y=y1-y0;
  ab=pow(x,2)+pow(y,2);

  return ab=sqrt(ab);
}

int main(void) {
  /* (2) 構造体型pointの配列 table を定義する。配列の大きさは10とする。*/
  struct point table[10];

  int n = 0;                    /* 配列 table に格納した点の個数 */

  /* (3) 重心を表す構造体型pointの変数cpを定義する。*/
  
  struct point cp;
  int i = 0, j;                    /* 繰り返し用の変数 */
  double x, y;                  /* 点の座標の入力用の変数 */
  double sumX  = 0, sumY  = 0;  /* X 座標と Y 座標の合計 */
  double dj, dt;

  while (scanf("%lf %lf", &x, &y) != EOF) {
    /* (4) 標準入力から入力した点 (x, y) の値を配列 table のi番目に格納する。*/  
  table[i].x = x;
  table[i].y = y;

    i++;
  }
  n = i;

  if ( n > 0 ) {
    for (i = 0; i < n; i++) {
      /* (5) 配列 table のi番目の点のx とyの値をsumXとsumYに足す。*/  
   sumX +=table[i].x;
   sumY +=table[i].y;

    }

    /* n 個の点の重心を計算する */  
    cp.x = sumX/n;
    cp.y = sumY/n;
    
    dj = distance(0,0,cp.x,cp.y);

    printf("入力した%d個の点の重心は(%.1f, %.1f)で、距離は %.2f です。\n",n, cp.x, cp.y, dj);
    printf("重心(%.1f, %.1f)よりも原点から遠い点は次です。\n", cp.x, cp.y);
    for(j=0;j < n;j++){
    dt = distance(0,0,table[j].x,table[j].y);
    if(dj<dt){
     printf("%d   %.2f (%.1f, %.1f)\n",j+1, dt, table[j].x ,table[j].y);
  }
}
}
  return 0;
}

