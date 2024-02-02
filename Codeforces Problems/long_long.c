#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        long long int n, j, k, count = 0, sum = 0, flag = 0;
        scanf("%lld", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%lld", &a[j]);

            if (a[j] < 0)
            {
                sum += a[j] * -1;
            }
            else
            {
                sum += a[j];
            }
        }

        k = 0;

        while (k < n)
        {
            flag = 0;
            while (a[k] < 0 || (flag == 1 && a[k] <= 0))
            {
                flag = 1;
                k++;
            }

            if (flag == 1)
            {
                count++;
            }
            k++;
        }

        printf("%lld %lld\n", sum, count);
    }
}
