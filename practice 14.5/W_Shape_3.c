#include <stdio.h>
int main()
{
    int n, space, k = 1;
    scanf("%d", &n);
    space = n - 1;
    for (int i = 1; i <= n * 2; i++)
    {
        if (i <= n)
        {
            for (int s = 1; s <= space; s++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
            k += 2;
            space--;
        }
        else
        {
            k -= 2;
            space++;

            for (int s = 1; s <= space; s++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}