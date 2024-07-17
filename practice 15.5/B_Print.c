#include <stdio.h>
void value_print(int n)
{
    for (int i = 0; i < n; i++)
    {
        if(i!=n-1){
            printf("%d ", i+1);
        }else{
             printf("%d", i+1);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    value_print(n);
    return 0;
}