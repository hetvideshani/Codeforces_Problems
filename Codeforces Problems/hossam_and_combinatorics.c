#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i, min, max, cmax = 0, cmin = 0;
        scanf("%d", &n);

        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        min = a[0];
        max = a[0];

        for (i = 1; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }

        for (i = 0; i < n; i++)
        {
            if (a[i] == min)
            {
                cmin++;
            }
            if (a[i] == max)
            {
                cmax++;
            }
        }

        // printf("%d %d\n", max, min);
        // printf("%d %d", cmax, cmin);

        if (cmax > cmin)
        {
            printf("%lld\n", (long long int)pow(2, cmax));
        }
        else
        {
            printf("%lld\n", (long long int)pow(2, cmin));
        }
    }
    return 0;
}