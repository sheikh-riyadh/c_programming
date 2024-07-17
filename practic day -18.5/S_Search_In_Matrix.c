#include <stdio.h>

int main()
{
    int row, col, searchNumber, flag = 0;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &searchNumber);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == searchNumber)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}