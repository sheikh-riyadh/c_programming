#include <stdio.h>

void summation(int arr[], int n, int sum)
{

    if (n < 0)
    {
        printf("%d\n", sum);
        return;
    }
    sum += arr[n];
    summation(arr, n - 1, sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    summation(arr, n - 1, 0);

    return 0;
}
