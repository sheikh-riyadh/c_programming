#include<stdio.h>
#include<string.h>

int main ()
{
    char a[18];
    fgets(a,18,stdin);
    int count=0,i=0;
    while (a[i]!='\0')
    {
        count++;
        i++;
    }

    printf("%d",count);
    
return 0;
}