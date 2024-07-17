#include <stdio.h>
void small_to_capital(char c)
{
    printf("%c", c - 32);
}
int main()
{
    small_to_capital('b');
    return 0;
}