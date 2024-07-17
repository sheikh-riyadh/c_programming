#include <stdio.h>
#include <limits.h>
int main()
{
    int n, position, min = INT_MAX;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            position = i + 1;
        }
    }
    printf("%d %d", min, position);

    return 0;
}