#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);
    int s = n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < s - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k += 2;
        s--;
        printf("\n");
    }

    return 0;
}