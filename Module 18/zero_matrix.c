#include <stdio.h>
int main()
{
    int row, col, count = 0;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    int element = row * col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (element == count)
    {
        printf("Zero matrix");
    }
    else
    {
        printf("Not zero matrix");
    }

    return 0;
}