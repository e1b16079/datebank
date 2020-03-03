#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char *argv[]){
  int i,
  LIST_TYPE x;

  if (argc < 1)
    error("main: 引数を指定してください。");

   x = atoi(argv[1]);

   while(listLength()<x){
   
