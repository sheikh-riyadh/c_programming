#include <stdio.h>

void my_recursion(int n)
{
    int x = n % 10;
    if (n == 0)
        return;
    my_recursion(n / 10);
    printf("%d ", x);
}
int main()

{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        my_recursion(n);
        if(n==0){
            printf("0");
        }
        printf("\n");
    }

    return 0;
}