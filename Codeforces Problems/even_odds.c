#include <stdio.h>

int main()
{
    long long int n, k, x;
    scanf("%lld%lld", &n, &k);

    if (n % 2 == 0)
    {
        x = n / 2;
    }
    else
    {
        x = (n / 2) + 1;
    }

    if (k <= x)
    {
        // if (k == x)
        // {
        //     printf("%lld", k);
        // }
        // else
        // {
        // for (i = 1; i < n; i += 2)
        // {
        //     count++;
        //     if (count == k)
        //     {
        //         flag = 1;
        //         printf("%lld", i);
        //         break;
        //     }
        // }

        long long int d;

        d = (k * 2) - 1;

        printf("%lld", d);

        //}
    }

    else
    {
        // if(n%2==0)
        // {
        // count = x;
        // }                                            // 7
        // else                                         // 1 3 5 7 2 4 6
        // {
        //     count=(n/2)+1;
        // }
        // for (i = 2; i < n; i += 2)
        // {
        //     count++;
        //     if (count == k)
        //     {
        //         printf("%lld", i);
        //         break;
        //     }
        // }

        long long int d, t, h;

        if (n % 2 == 0)
        {
            d = n - x;
            h = k - d;
            t = h * 2;

            printf("%lld", t);
        }

        else
        {
            d = n - x;
            h = k - d;
            t = (h - 1) * 2;

            printf("%lld", t);
        }
    }
    return 0;
}