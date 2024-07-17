#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[10001];

    for (int i = t; i > 0; i--)
    {
        scanf("%s", s);

        int capital = 0, lowercase = 0, number = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                capital++;
            }

            else if (s[i] >= 97 && s[i] <= 122)
            {
                lowercase++;
            }

            else if (s[i] >= 48 && s[i] <= 57)
            {
                number++;
            }
        }

        printf("%d %d %d\n", capital, lowercase, number);
    }

    return 0;
}
