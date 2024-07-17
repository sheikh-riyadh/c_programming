#include <stdio.h>
int main()
{
    int n, space, counter = 1;
    scanf("%d", &n);
    space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int j = counter; j >= 1; j--)
        {
            printf("%d", j);
        }
        space--;
        counter++;
        printf("\n");
    }

    return 0;
}