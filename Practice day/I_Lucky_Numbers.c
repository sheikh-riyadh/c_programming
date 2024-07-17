#include <stdio.h>
int main()
{
    int n, quotient, remainder;

    scanf("%d", &n);
    quotient = n / 10;
    remainder = n % 10;

    if (quotient != 0 && remainder % quotient == 0)
    {
        printf("YES");
    }
    else if (remainder != 0 && quotient % remainder == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
