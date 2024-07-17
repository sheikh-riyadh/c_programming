#include <stdio.h>
int main()
{
    int n, sum_positive = 0, sum_negative = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            sum_positive += arr[i];
        else
            sum_negative += arr[i];
    }

    printf("%d %d", sum_positive, sum_negative);

    return 0;
}