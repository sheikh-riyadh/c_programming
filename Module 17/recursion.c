#include <stdio.h>

void my_fun(int i)
{
    if (i > 5) // Base Case
        return;

    printf("%d \n", i);
    my_fun(i + 1);
}

int main()
{

    my_fun(1);
    return 0;
}