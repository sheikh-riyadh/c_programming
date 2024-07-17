#include <stdio.h>
void my_recursion(int n)
{
    if (n == 0)
        return;
    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }
    my_recursion(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    my_recursion(n);

    return 0;
}