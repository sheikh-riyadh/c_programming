#include <stdio.h>
void even_recursion(int arr[], int n)
{
    if (n < 0)
        return;

    if (n % 2 == 0)
    {
        printf("%d", arr[n]);

        if (arr[n] != '\0')
            printf(" ");
    }
    even_recursion(arr, n - 1);
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
    even_recursion(arr, n - 1);

    return 0;
}