#include<stdio.h>
#define MAXSIZE 10
int main(void){
    int a[MAXSIZE]={10,20,30,40,50};
    int index, data;
    int i, k, j;

    printf("a：");
    for(i=0;i<MAXSIZE;i++){
       printf("[%d]=%d ", i, a[i]);
    }
    printf("\n\n");

    printf("index： "); scanf("%d", &index);
    printf("data： "); scanf("%d", &data);
    printf("a[%d]に%dを挿入します\n", index, data);
    for(k=MAXSIZE-1;k>index;k--){
      a[k]=a[k-1];
   }

    a[index]=data;

    printf("a：");
    for(i=0;i<MAXSIZE;i++){
       printf("[%d]=%d ", i, a[i]);
    }
    printf("\n\n");

    printf("index： "); scanf("%d", &index);
    printf("a[%d]を削除します\n", index);

    for(j=index;j<MAXSIZE-1;j++){
      a[j]=a[j+1];
   }
   a[MAXSIZE-1]=0;
    printf("a：");
    for(i=0;i<MAXSIZE;i++){
       printf("[%d]=%d ", i, a[i]);
    }
    printf("\n");
    return 0;
}

