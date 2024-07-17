#include<stdio.h>
int main ()
{
   char c;
   scanf("%c",&c);
   if(c>='0' && c<='9'){
    printf("IS DIGIT");
   }else if(c>='a' && c<='z'){
   printf("ALPHA\nIS SMALL");
   }else{
       printf("ALPHA\nIS CAPITAL");
   }

return 0;
}
