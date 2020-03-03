#include <stdio.h>
#include <stdlib.h>

/* (1) int 型のメンバ hh (時) と mm (分) からなる構造体型 time を宣言する */
struct time {
  int hh;
  int mm;
};

/* (2) 構造体型 time に対して TIME という typedef名を宣言する */
typedef struct time TIME;

TIME *getLocalTime(TIME t1, int *dd) {
 int  m1;
 TIME *t2=NULL;

  t2=malloc(sizeof(TIME));
if (t2 == NULL) {
  fprintf(stderr, "メモリが足りません。\n");
  exit(1);
  }

m1 = t1.hh * 60 + t1.mm + *dd * 60;

if(m1<0){
  m1+=24*60;
}
 t2->hh = m1 / 60;
 t2->mm = m1 % 60;

if(t2->hh>=24){
  t2->hh -=24;
}


  return t2;
}

int main(int argc, char *argv[]) {

  int diff;

  TIME t1,*t2;
if (argc < 2) {
    fprintf(stderr, "引数を3個指定してください。\n");
    exit(1);
  }

 t1.hh = atof(argv[1]);
 t1.mm = atof(argv[2]);
 diff = atof(argv[3]); 

  t2=getLocalTime(t1,&diff);

printf("時刻 %02d:%02d は時差 %d の国では %02d:%02d です。\n",t1.hh, t1.mm, diff, t2->hh, t2->mm);

free(t2);
  return 0;
}

