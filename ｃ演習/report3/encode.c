#include<stdio.h>
int main(void){

   int c=1, a, b, d, e, f, i;

   getchar();
   getchar();
   getchar();

   scanf("%d",&e);
   printf("%d\n",e);
   scanf("%d",&d);
   printf("%d\n",d);
   scanf("%d",&f);   
   printf("%d\n",f);
   scanf("%d",&a);

   for(i=1;i<e*d;i++){
     scanf("%d",&b);
     if(a==b){
      c++;
      a=b;
     }
     else{
      printf("%d %d\n",a,c);
      a=b;
      c=1;
     }
   }
    
   if(c>1){
     printf("%d %d\n",a,c);
     }
     else{
      printf("%d 1\n",a);
     }
   return 0;
}




   
