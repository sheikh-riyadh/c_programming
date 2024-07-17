#include<stdio.h>
#include<string.h>
int main ()
{
    char a[14];
    fgets(a,14,stdin);
    printf("%s",a);
return 0;
}