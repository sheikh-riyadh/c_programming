#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int alength = strlen(a);
    for (int i = 0; i <=strlen(b); i++)
    {
      a[alength]=b[i];
      alength++;
    }

    printf("%s",a);
    
return 0;
}