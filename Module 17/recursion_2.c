#include <stdio.h>
void func(int i)
{
    if (i == 0)
        return;
    printf("%d\n", i);
    func(i - 1);
}
int main()
{

    func(10);
    return 0;
}