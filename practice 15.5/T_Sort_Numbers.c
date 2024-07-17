#include <stdio.h>
int main()
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}