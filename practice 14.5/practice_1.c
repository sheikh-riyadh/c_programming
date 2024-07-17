#include <stdio.h>
int main()
{
    int n, space;
    scanf("%d", &n);
    space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for(int star=0; star<=i; star++){
            printf("*");
        }
        space--;
        printf("\n");
    }

    return 0;
}