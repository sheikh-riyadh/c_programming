#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int rw = 0; rw < row; rw++)
    {
        for (int clm = 0; clm < col; clm++)
        {
            scanf("%d", &arr[rw][clm]);
        }
    }
    for (int clm = 0; clm < col; clm++)
    {
        printf("%d ", arr[row - 1][clm]);
    }
    printf("\n");
    for (int rw = 0; rw < row; rw++)
    {
        for (int i = 0; i < row; i++)
        {
            if (rw == i)
            {
                printf("%d ", arr[rw][col - 1]);
            }
        }
    }

    return 0;
}