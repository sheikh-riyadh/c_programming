#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);
    k = n + 2, s = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < s; space++)
        {
            printf(" ");
        }
        for (int star = k; star > 0; star--)
        {
            printf("*");
        }
        k -= 2;
        s++;
        printf("\n");
    }

    return 0;
}