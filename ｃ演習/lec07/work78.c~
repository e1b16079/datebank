#include<stdio.h>
int main(void){

   int a, c=0, i, f, v, k, j;

   printf("桁区切りをする値の入力：");
   scanf("%d", &a);
   i=a;
   while(i/10>0){
    c++;
    i=i/10;
   }
    for(j = 0; j < c + 1; j++){
        f = 1;
        for(k = 1; k <= c - j; k++) f = f * 10;
        v = a / f;
        printf("%d", v);
        a = a - v * f;
        if(k % 3 ==1 && k > 1) printf(",");
    }
    printf("\n");
 
    return 0;
}

