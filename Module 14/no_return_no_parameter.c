#include <stdio.h>

void sum(void)
{
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = a + b;
    printf("%d", result);
}

int main()
{

    sum();
    return 0;
}