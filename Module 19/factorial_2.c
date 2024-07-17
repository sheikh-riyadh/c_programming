#include <stdio.h>
long long int fact(long long int n)
{
    if (n <= 0)
    {
        return 1;
    }

    long long int result = fact(n - 1);
    return n * result;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int rslt = fact(n);
    printf("%lld", rslt);
    return 0;
}