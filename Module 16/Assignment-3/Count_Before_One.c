#include <stdio.h>
int count_before_one(int *arr, int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            break;
        }
        else
        {
            counter++;
        }
    }

    return counter;
}
int main()
{
    int n;
    scanf("%d", &n);
    int number_arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number_arr[i]);
    }

    int result = count_before_one(number_arr, n);
    printf("%d", result);

    return 0;
}