#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
    int count_two = 0, count_three = 0;
    for (int i = 0; i < n; i++)
    {
        if (k[i] % 2 == 0)
        {
            count_two++;
            continue;
        }
        if (k[i] % 3 == 0)
        {
            count_three++;
        }
    }

    printf("%d %d",count_two,count_three);

    return 0;
}