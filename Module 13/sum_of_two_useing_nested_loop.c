#include <stdio.h>
int main()
{
    int n, x, flag = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}