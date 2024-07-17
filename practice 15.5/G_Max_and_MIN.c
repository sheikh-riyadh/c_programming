#include <stdio.h>
#include<limits.h>
void getMinValue(int *arr, int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d ", min);
}

void getMaxValue(int *arr, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
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

    getMinValue(arr, sizeof(arr) / 4);
    getMaxValue(arr, sizeof(arr) / 4);

    return 0;
}