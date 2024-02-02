#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, k, j, x, y, z;
        scanf("%d%d", &n, &k);

        long int a[n], max, temp;

        long long int sum = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%ld", &a[j]);
            if (a[j] >= max)
            {
                max = a[j];
            }
            sum += a[j];
        }

        for (x = 0; x < n; x++)
        {
            for (y = x + 1; y < n; y++)
            {
                if (a[x] >= a[y])
                {
                    temp = a[x];
                    a[x] = a[y];
                    a[y] = temp;
                }
            }
        }
        x = 0;
        y = 1;
        z = n - 1;

        for (j = 0; j < k; j++)
        {
            if (max >= a[x] + a[y])
            {
                sum -= a[x] + a[y];
                x += 2;
                y += 2;
            }
            else
            {
                sum -= max;
                z--;
                max = a[z];
            }
        }

        printf("%lld\n", sum);
    }
}