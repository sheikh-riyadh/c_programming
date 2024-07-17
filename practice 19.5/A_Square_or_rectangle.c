#include <stdio.h>
int main()
{
    int test, h, w;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d", &h, &w);
        if(h==w){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }

    return 0;
}