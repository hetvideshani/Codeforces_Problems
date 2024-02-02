#include <stdio.h>
int main()
{
    int n, i, j;
    long long int k, max = 0;
    scanf("%d%lld", &n, &k);
    long long int a[n][2];

    for (i = 0; i < n; i++)
    {
        scanf("%lld%lld", &a[i][0], &a[i][1]);
    }

    if (a[0][1] > k)
    {
        max = a[0][0] - a[0][1] + k;
    }
    else
    {
        max = a[0][0];
    }

    for (i = 1; i < n; i++)
    {
        if (a[i][1] > k)
        {
            if (a[i][0] - a[i][1] + k > max)
            {
                max = a[i][0] - a[i][1] + k;
            }
        }
        else
        {
            if (a[i][0] > max)
            {
                max = a[i][0];
            }
        }
    }

    printf("%lld", max);
    return 0;
}