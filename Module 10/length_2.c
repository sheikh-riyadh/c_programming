#include<stdio.h>
#include<string.h>
int main ()
{
    char a[14];
    fgets(a,14,stdin);
    int length= strlen(a);
    printf("%d",length);
return 0;
}