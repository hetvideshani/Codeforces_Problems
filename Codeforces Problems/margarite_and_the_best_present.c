#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        long long int l, r, nl, suml = 0, sumr = 0;
        scanf("%lld%lld", &l, &r);

        if (r % 2 == 0)
        {
            long long int x;
            x = r / 2;
            sumr = (x * (x + 1)) - (x * x);
        }
        else
        {
            long long int x, y;
            x = r / 2;
            y = x + 1;
            sumr = (x * (x + 1)) - (y * y);
        }

        nl = l - 1;

        if (nl % 2 == 0)
        {
            long long int x;
            x = nl / 2;
            suml = (x * (x + 1)) - (x * x);
        }
        else
        {
            long long int x, y;
            x = nl / 2;
            y = x + 1;
            suml = (x * (x + 1)) - (y * y);
        }

        printf("%d\n", sumr - suml);
    }
}