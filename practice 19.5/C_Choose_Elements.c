#include <stdio.h>
int main()
{
    long long int n, k, temp = 0, sum = 0;
    scanf("%lld %lld", &n, &k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        printf("0");
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}