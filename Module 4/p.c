#include<stdio.h>
int main ()
{
   int a,result;
   scanf("%d",&a);
   result = a/1000;
   if(result%2==0){
    printf("EVEN");
   }else{
   printf("ODD");
   }
return 0;
}
