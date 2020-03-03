#include<stdio.h>
#define KETA 750
#define HKETA 501
#define N 400
void itini(int a[]){
 int i;
   a[0]=1;
   for(i=1;i<KETA;i++){
   a[i]=0;}
}

void wari(int b[],int x){
 int i, tmp, carry=0;
for(i=0;i<KETA;i++){
    tmp=b[i]+carry;
    b[i]=tmp/x;
    carry=tmp%x*10;
    }

}
void tasi(int c[],int d[]){
 int i, age=0;

    for(i=KETA-1;i>=0;i--){
    c[i]=c[i]+d[i];
    
    if(age==1){
    c[i]=c[i]+1 ;
    age=0;
    }
    
    if(c[i]>=10){
    age=1;
    c[i]=c[i]-10;
    }
    }
}

void hiki(int e[],int f[]){
 int i, sage=0;

   for(i=KETA-1;i>=0;i--){
    e[i]=e[i]-f[i];
    
    if(sage==1){
    e[i]=e[i]-1;
    sage=0;
    }

    if(e[i]<0){
    sage=1;
    e[i]=e[i]+10;
    }
    }
}


void kake(int g[],int x){
  int i, tmp, age=0;

    for(i=KETA-1;i>=0;i--){
    tmp=g[i]* x +age;
    g[i]=tmp%10;
    age=tmp/10;
    }
}

int main(void){

   int p[KETA],q[KETA],t[KETA]={1}, n, i, j, x, cnt=0;

   for(n=0;n<N;n++){
     itini(t);
     x=2*n+1;
     wari(t,x);
    
     for(i=0;i<x;i++){
       wari(t,5);
      }
      if(n%2==0){
       tasi(p,t);
      }
      else{
       hiki(p,t);
      }
    }

   kake(p,4);

   for(n=0;n<N;n++){
     itini(t);
     x=2*n+1;
     wari(t,x);
     for(j=0;j<x;j++){
       wari(t,239);
      }
     if(n%2==0){
       tasi(q,t);
      }
      else{
       hiki(q,t);
      }
    }

  hiki(p,q);
  kake(p,4);

  printf("%d.\n",p[0]);
  for(i=1;i<HKETA;i++){
   printf("%d",p[i]);
  cnt++;
  if(cnt==10){
  printf(" ");
  cnt=0; 
   }
}
     printf("\n");
    
     return 0;
}
