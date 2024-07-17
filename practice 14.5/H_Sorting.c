#include <stdio.h>

void sorting()
{
    int n, temp, increament = 1;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (number[i] > number[j])
            {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }
}

int main()
{

    sorting();
    return 0;
}