#include <stdio.h>
#include <limits.h>

int get_max(int arr[], int n, int start_index)
{
    if (n == start_index)
    {
        return INT_MIN;
    }
    int max = get_max(arr, n, start_index + 1);

    if (arr[start_index] > max)
    {
        return arr[start_index];
    }
    else
    {
        return max;
    }
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

    int result = get_max(arr, n, 0);
    printf("%d", result);

    return 0;
}