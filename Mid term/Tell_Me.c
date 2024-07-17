#include <stdio.h>
int main()
{
    int textCase;
    scanf("%d", &textCase);
    for (int i = 0; i < textCase; i++)
    {
        int n;
        scanf("%d", &n);
        int m[n];
        int searchingNumber;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &m[i]);
        }
        scanf("%d", &searchingNumber);
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[i] == searchingNumber)
            {
                result = 1;
                break;
            }
        }
        if (result == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}