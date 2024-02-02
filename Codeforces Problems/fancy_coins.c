#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m, k, a1, ak, sum = 0;
        scanf("%lld%lld%lld%lld", &m, &k, &a1, &ak);

        if (a1 == 0 && ak == 0)
        {
            sum += m / k;
            sum += m % k;

            printf("%d\n", sum);

            continue;
        }

        if (ak * k + a1 > m)
        {
            printf("0\n");

            continue;
        }

        long long int total = 0, diff = 0;

        total = ak * k + a1; // 9

        diff = m - total; // 2

        sum += diff / k;
        diff -= (diff / k) * k;
        sum++;

        // if (diff < k && diff < a1)
        // {
        //     sum += 1;
        // }

        // else if (diff < k && diff > a1)
        // {
        //     sum += diff / k;
        //     diff -= (diff / k) * k;
        //     sum += diff;
        // }

        // else if (diff > k && diff < a1)
        // {
        //     sum += diff / k;
        //     diff -= (diff / k) * k;
        //     sum += diff;
        // }

        // if (diff > k)
        // {
        //     sum += diff / k;
        //     diff -= diff / k;
        // }

        // if (diff < a1)
        // {
        //     sum += 1;
        // }
        // sum += diff;

        // sum += diff / k; //

        // // if (a1 > diff % k)
        // // {
        // //     sum += 1;
        // // }
        // diff -= diff / k;

        // sum += diff % k;

        printf("%d\n", sum);
    }
    return 0;
}
// 11 3 6 1
// 11 3 0 1     3   8   2