#include <stdio.h>
long long int factorial(long long int fact, long long int result)
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
    scanf("%lld", &fact);
    if (fact == 0)
    {
        printf("1");
    }
    else
    {
        long long int rslt = factorial(fact, 1);
        printf("%lld", rslt);
    }

    return 0;
}