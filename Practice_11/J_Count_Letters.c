#include <stdio.h>
int main()
{
    char c;
    int count[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        count[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'] > 0)
            printf("%c : %d\n", i, count[i - 97]);
    }

    return 0;
}