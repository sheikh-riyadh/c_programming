#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char a[n + 1];
    scanf("%s", a);
    for (int i = 0; i < n; i++)
    {
        int value = a[i] - '0';
        sum += a[i] - '0';
    }
    printf("%d",sum);

    return 0;
}