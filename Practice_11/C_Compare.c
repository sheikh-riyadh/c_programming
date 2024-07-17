#include <stdio.h>
#include <string.h>
int main()
{
    char x[20], y[20];
    scanf("%s %s", x, y);
    int value = strcmp(x, y);
    
    if(value>0){
        printf("%s",y);
    }else if(value<0){
        printf("%s",x);
    }else{
        printf("%s",y);
    }

    return 0;
}