#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, k, count = 0, max = 0, diff;
        scanf("%d%d", &n, &k);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n - 1; j++)
        {
            diff = a[j + 1] - a[j];

            if (diff < 0)
            {
                diff *= -1;
            }

            if (diff > max)
            {
                max = diff;
            }
        }

        printf("%d\n", max - 1);
    }
}