#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x; // this is pointer pointer means memory address
    *p = 50;
    printf("%d", x);


    return 0;
}