#include <stdio.h>
int main()
{
    int n, space = 0, start_start;
    scanf("%d", &n);
    start_start = (n * 2) - 1;
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }

        for (int star = 0; star < start_start; star++)
        {
            printf("*");
        }
        space++;
        start_start -= 2;
        printf("\n");
    }

    return 0;
}