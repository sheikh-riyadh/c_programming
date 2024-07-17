#include <stdio.h>
int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    float percentage = 1 - x / 100;
    float original_price = p/percentage;
    printf("%.2f",original_price);
    return 0;
}