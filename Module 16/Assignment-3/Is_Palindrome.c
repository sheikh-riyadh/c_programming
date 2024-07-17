#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int length = strlen(str);
    char my_str[length + 1];

    int index = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        my_str[index] = str[i];
        index++;
    }
    my_str[length] = '\0';
    int result = strcmp(my_str, str);
    if (result == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[1001];
    scanf("%1000s", str);
    int result = is_palindrome(str);

    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
