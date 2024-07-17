#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, primary = 0, secondary = 0;

    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        primary += arr[i][i];
        secondary += arr[i][n - i - 1];
    }

    printf("%d\n", abs(primary - secondary));

    return 0;
}
