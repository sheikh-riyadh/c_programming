#include <stdio.h>
int main()
{
    int n, m1, m2, d;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int perFermers = m1 * d;
        int total_farmers = m1 + m2;
        int total = perFermers / total_farmers;
        int result = d-total;
       printf("%d\n",result);
    }

    return 0;
}