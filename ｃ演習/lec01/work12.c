#include<stdio.h>

int main(void){
    int a;
    int b;
    int c;

    a= 7;
    b= 2;

    c= a+ b;
    printf("%dに%dを加えると%dになります。\n", a, b, c);

    c= a-b;
    printf("%dから%dを引くと%dになります。\n", a, b, c);

    c= a* b;
    printf("%dに%dをかけると%dになります。\n", a, b, c);

    c= a/ b;
    printf("%dを%dで割ると%dになります。\n", a, b, c);
    
    c= a% b;
    printf("%dを%dで割った余りは%dです。\n", a, b, c);
  
 return 0;
    }

