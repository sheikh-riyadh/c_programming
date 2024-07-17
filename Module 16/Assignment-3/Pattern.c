#include <stdio.h>
int main()
{
    int n, space, hash = 1;
    scanf("%d", &n);
    space = n - 1;
    for (int i = 0; i < (n * 2) - 1; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int hash_count = 1; hash_count <= hash; hash_count++)
        {
            if(i%2==1){
                printf("-");
            }else{
                printf("#");
            }
        }
        if (n - 1 > i)
        {
            hash += 2;
            space -= 1;
        }
        else
        {
            hash -= 2;
            space += 1;
        }
        printf("\n");
    }

    return 0;
}