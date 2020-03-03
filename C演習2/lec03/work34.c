#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i;
  int min = 1;

  for (i = 1; i < argc; i++){
    if(atoi(argv[min])>atoi(argv[i])){
     min=i;
    }
  }
  printf("プログラム引数の個数 %d 最小値 %d\n",
                                     (argc - 1), atoi(argv[min]));
  return 0;
}

