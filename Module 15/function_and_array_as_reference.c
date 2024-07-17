#include <stdio.h>
void fun(int *arr, int size)
{
    *arr = 500;
}
int main()
{
    int arr[3] = {10, 20, 30};
    fun(arr, 3);
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}