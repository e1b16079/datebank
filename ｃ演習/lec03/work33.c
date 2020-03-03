#include<stdio.h>
int main(void){
    int ok, ta, ko, fu;

    printf("所持金を入力して下さい：");
    scanf("%d",&ok);
    printf("ジュース一本の単価を入力して下さい：");
    scanf("%d", &ta);
    
    if(ok>=ta){
    ko=ok/ta;
    printf("ジュースを%d本買うことができます。\n",ko);
    }
    else{
    fu=ta-ok;
    printf("あと%d円あれば一本買うことができます。\n",fu);
    }
    
    return 0;
}
    
