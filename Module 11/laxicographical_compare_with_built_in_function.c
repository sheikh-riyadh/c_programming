#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int value = strcmp(a, b);

    if(value==0){
        printf("Same\n");
    }else if(value>0){
        printf("A greater than of B\n");
    }else{
        printf("B greter than of A\n");
    }

    return 0;
}