#include <stdio.h>
int my_len(char *c)
{
    int len = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}
int main()
{
    char c[6] = "Hello";
    int result = my_len(c);
    printf("%d", result);

    return 0;
}