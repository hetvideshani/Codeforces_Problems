#include <stdio.h>
int main()
{
    int t, i, j, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n;
        long long int max = 0, smax = 0, min = 0, smin = 0;
        scanf("%d", &n);

        long long int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &a[j]);
        }

        for (j = 0; j < n - 1; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (j == 0 && k == 1)
                {
                    max = a[j] * a[k];
                }
                else
                {
                    if (a[j] * a[k] > max)
                    {
                        max = a[j] * a[k];
                    }
                }
            }
        }

        printf("%lld\n", max);

        //     if (j == 0)
        //     {
        //         max = a[j];
        //         min = a[j];
        //     }
        //     else if (a[j] > max)
        //     {
        //         max = a[j];
        //     }
        //     else if (a[j] < min)
        //     {
        //         min = a[j];
        //     }
        //     else if (a[j] <= max && a[j] >= smax)
        //     {
        //         smax = a[j];
        //     }
        //     else if (a[j] >= min && a[j] <= smin)
        //     {
        //         smin = a[j];
        //     }
        // }

        // printf("%lld %lld   %lld %lld", max, smax, min, smin);
    }
}