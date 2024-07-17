#include <stdio.h>

int sum(int x, int y)
{
    int result = x + y;
    return result;
}

int main()
{

    int result = sum(50, 100);
    printf("%d", result);
    return 0;
}