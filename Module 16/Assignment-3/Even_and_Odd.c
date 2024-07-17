#include <stdio.h>

void odd_even()
{
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    int number_array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number_array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (number_array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d %d", even, odd);
}

int main()
{
    odd_even();
    return 0;
}
