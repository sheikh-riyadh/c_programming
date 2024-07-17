#include <stdio.h>
int main()
{
    int t, tiger = 0, pathan = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char string[n];
        scanf("%s", string);
        for (int j = 0; j < n; j++)
        {
            if (string[j] == 'T')
            {
                tiger++;
            }
            if (string[j] == 'P')
            {
                pathan++;
            }
        }

        if(pathan>tiger){
            printf("Pathaan\n");
        }else if(tiger>pathan){
            printf("Tiger\n");
        }else{
            printf("Draw\n");
        }
        tiger=0;
        pathan=0;
    }

    return 0;
}