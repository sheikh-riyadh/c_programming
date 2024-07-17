#include <stdio.h>
int main()
{

    int arr[11] = {1,
                   3,
                   5,
                   7,
                   9,
                   11,
                   13,
                   15,
                   17,
                   19,
                   21};

    int n,
        row = 5, space = row, star = 1;
    scanf("%d", &n);

    for (int i = 0; i < 11; i++)
    {
        if (n == arr[i])
        {
            row += n % 2 + i;
            space += n % 2 + i;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int i = space; i > 1; i--)
        {
            printf(" ");
        }
        for (int i = 1; i <= star; i++)
        {
            printf("*");
        }

        space--;
        star += 2;
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}