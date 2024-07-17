#include <stdio.h>
int countVowel(char string[], int index)
{
    if (string[index] == '\0')
    {
        return 0;
    }
    int cnt = countVowel(string, index + 1);
    if (string[index] >= 'A' && string[index] <= 'Z')
    {
        string[index] = string[index] + 32;
    }
    if (string[index] == 'a' || string[index] == 'e' || string[index] == 'i' || string[index] == 'o' || string[index] == 'u')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    char str[201];
    fgets(str, 201, stdin);
    int result = countVowel(str, 0);
    printf("%d\n",result);
    return 0;
}