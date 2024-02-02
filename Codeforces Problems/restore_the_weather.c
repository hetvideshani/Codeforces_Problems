#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, k, j, temp, digit, x;
        scanf("%d%d", &n, &k);

        int a[n], b[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[j]);
        }

        for (j = 0; j < n; j++)
        {
            temp = b[j] - a[j];

            if (temp < 0)
            {
                temp *= -1;
            }

            if (temp > k)
            {
                for (x = j + 1; x < n; x++)
                {
                    temp = b[x] - a[j];

                    if (temp < 0)
                    {
                        temp *= -1;
                    }

                    if (temp <= k)
                    {
                        digit = b[x];
                        b[x] = b[j];
                        b[j] = digit;
                    }
                }
            }
        }

        for (j = 0; j < n; j++)
        {
            printf("%d ", b[j]);
        }
        printf("\n");
    }
}