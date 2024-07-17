#include <stdio.h>
#include <limits.h>
int main()
{
    int n, min = INT_MAX,count=0;
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
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}