#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j, sum = 0, countm = 0, countp = 0, mul = 1, diff;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            sum += a[j];
            mul *= a[j];

            if (a[j] == -1)
            {
                countm++;
            }
            else
            {
                countp++;
            }
        }

        if (sum >= 0 && mul == 1)
        {
            printf("0\n");
        }
        else if (sum <= 0 && mul == 1)
        {
            diff = countm - countp;
            if (countp == 0)
            {
                if ((n / 2) % 2 == 0)
                {
                    printf("%d\n", diff / 2);
                }
                else
                {
                    printf("%d\n", (diff / 2) + 1);
                }
                continue;
            }

            if ((countm - diff) % 2 == 0)
            {
                printf("%d\n", diff);
            }
            else
            {
                printf("%d\n", diff + 1);
            }
        }
        else if (sum >= 0 && mul == -1)
        {
            printf("1\n");
        }
        else if (sum <= 0 && mul == -1)
        {
            diff = countm - countp;

            if (diff % 2 == 0)
            {
                printf("%d\n", diff - 1);
            }
            else
            {
                printf("%d\n", diff);
            }
        }
    }
}
// -1 -1 -1 -1 -1 1 1