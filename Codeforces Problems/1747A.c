#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n, sumn = 0, sump = 0;
        scanf("%lld", &n);

        long long int a[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &a[j]);

            if (a[j] < 0)
            {
                sumn += a[j];
            }
            else if (a[j] > 0)
            {
                sump += a[j];
            }
        }

        sumn *= -1;

        if (sumn > sump)
        {
            printf("%lld\n", sumn - sump);
        }
        else
        {
            printf("%lld\n", sump - sumn);
        }
    }
    return 0;
}