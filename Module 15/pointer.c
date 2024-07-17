#include <stdio.h>
int main()
{
    int n = 20;
    int *ptr = &n;
    *ptr = 500;
    printf("%d",n);

    return 0;
}