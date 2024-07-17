#include <stdio.h>
long long int factorial(int fact, int result)
{
    if (fact <= 0)
    {
        return result;
    }
    result *= fact;
    factorial(fact - 1, result);
}
int main()
{
    long long int fact;
    scanf("%d", &fact);
    if (fact == 0)
    {
        printf("1");
    }
    else
    {
        long long int rslt = factorial(fact, 1);
        printf("%d", rslt);
    }

    return 0;
}