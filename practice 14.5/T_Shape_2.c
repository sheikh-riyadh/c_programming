#include <stdio.h>
int main()
{
    int n, space, k = 1;
    scanf("%d", &n);
    space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }

        for (int star = 1; star <= k; star++)
        {
            printf("*");
        }
        k += 2;
        space--;
        printf("\n");
    }

    return 0;
}