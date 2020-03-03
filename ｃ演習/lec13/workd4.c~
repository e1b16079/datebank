#include<stdio.h>
#define MAXNUM 1000

int app_Prime(int a,int prime[],int count){

   int j, flag=0;
     
     for(j=1;j<=count;j++){
       if(a%prime[j]==0){
        flag=1;
       }
     }
     if(flag==0){
       count++;
       prime[count]=a;
     }
   return count;
}

void print_GraphA(int prime[],int count){

   int i;

   for(i=0;i<10;i++){
      
   














int main(void){

   int prime[MAXNUM]={0,2}, i, count=1;

   for(i=2;i<MAXNUM;i++){
    count=app_Prime(i,prime,count);
   }

  print_GraphA(prime, count)
