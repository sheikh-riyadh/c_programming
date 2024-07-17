#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (r == c || r+c==row-1)
            {
                if (arr[r][c] != 1)
                {
                    flag = 0;
                }
            }
            else if (arr[r][c] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}