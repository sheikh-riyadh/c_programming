#include <stdio.h>

void my_func(int arr[], int size, int index)
{
    if (index >= size)
        return;
    printf("%d ", arr[index]);
    my_func(arr, size, index + 1);
}

int main()
{
    int n, index = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    my_func(arr, n, index);

    return 0;
}
