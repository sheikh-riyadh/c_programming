#include <stdio.h>
int my_recursion(int n)
{
    if (n == 0)
    {
        return 0;
    }
    my_recursion(n-1);
    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    my_recursion(n);

    return 0;
}