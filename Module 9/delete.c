#include <stdio.h>
int main()
{

    /* 
    4
    10 20 30 40
    2
     */
    int n, position;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &position);
    for (int i = position; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

    return 0;
}