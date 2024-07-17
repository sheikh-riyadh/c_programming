#include <stdio.h>
int find_length(char str[], int index)
{
    if (str[index] == '\0')
        return 0;
    int length = find_length(str, index + 1);
    return length + 1;
}
int main()
{
    char str[6] = "Hello";
    int index = 0;
    int length = find_length(str, index);
    printf("%d", length);

    return 0;
}