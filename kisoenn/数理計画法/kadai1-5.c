#include
#include <stdlib.h>
#include <time.h>
FILE *fp;
int a[10];
ststic void input(){
  int i;
  srand((unsigned)time(NULL));
  for(i=0;i<10;i++){
    a[i]=rand()%50+10;
  }
}

static void output(){
  int i;
  fopen_s(&fp,"kekka.txt","w");
  for( i=0;i<10;i++){
    fprintf(fp,"a[%1d]=%2d \n",i,a[i]);
  }
  fclose(fp);
}
int _tmain(){
  input();
  output();
  return 0;
}
