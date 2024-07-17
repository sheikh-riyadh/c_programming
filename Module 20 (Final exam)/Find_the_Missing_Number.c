#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        for (int i = 0; i < t; i++) {
        long long int abc = a * b * c;
        if (abc == 0) {
            if (m == 0) {
                printf("0\n");
                break;
            } else {
                printf("-1\n");
                break;
            }
        } else if (m % abc == 0) {
            long long int d = m / abc;
            printf("%lld\n", d);
            break;
        } else {
            printf("-1\n");
            break;
        }
    }
    }

    return 0;
}