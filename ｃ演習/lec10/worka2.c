#include<stdio.h>

  int add(int c, int d){
    int e;
    e=c+d;
    return e;
}

  int subtract(int c, int d){
    int e;
    e=c-d;
    return e;
}

  int multiple(int c, int d){
    return c*d;
}

  double divide(int c, int d){
    double e;
    e=(double)c/d;
    return e;
}

int main(void){
   int c, d, x;

   printf("二つの数値を入力して下さい。\n");
   printf("数値 1 :");
   scanf("%d",&c);
   printf("数値 2 :");
   scanf("%d",&d);

   x=add(c,d);
   printf("%dに%dを加えると%dになります。\n",c,d,x);
   x=subtract(c,d);
   printf("%dから%dを引くと%dになります。\n",c,d,x);
   x=multiple(c,d);
   printf("%dに%dをかけると%dになります。\n",c,d,x);
   printf("%dを%dで割ると%.3fになります。\n",c,d,divide(c,d));

   return 0;
}
