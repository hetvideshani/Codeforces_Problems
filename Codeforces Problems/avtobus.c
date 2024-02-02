#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n;
        scanf("%lld", &n);

        if (n % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            if (n / 6 == 0)
            {
                printf("%lld %lld\n", n / 4, n / 4);
                continue;
            }
            else if (n / 4 == 0)
            {
                printf("%lld %lld\n", n / 6, n / 6);
                continue;
            }

            if (n % 6 == 0)
            {
                printf("%lld ", n / 6);
            }
            else
            {
                printf("%lld ", (n / 6) + 1);
            }
            if (n % 4 == 0)
            {
                printf("%lld\n", n / 4);
            }
            else
            {
                printf("%lld\n", (n / 4) + 1);
            }
        }
    }
}