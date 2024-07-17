#include <stdio.h>
char capital_to_small(char c)
{
    char result = c + 32;
    return result;
}
int main()
{
    char result = capital_to_small('B');
    printf("%c", result);
    return 0;
}