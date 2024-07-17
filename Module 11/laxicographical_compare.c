#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("same");
            break;
        }
        else if (a[1] == '\0')
        {
            printf("A less than of B");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B less than of B");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] > b[i])
        {
            printf("A greater than of B");
            break;
        }
        else
        {
            printf("B greater than of A");
        }
    }

    return 0;
}