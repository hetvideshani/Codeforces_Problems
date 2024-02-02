#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, max = 0, smax = 0, cmax = 0;
        scanf("%d", &n);

        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        max = a[0];
        smax = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (a[j] > smax && a[j] < max)
            {
                smax = a[j];
            }
            if (a[j] == max)
            {
                cmax++;
            }
        }

        if (cmax == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == max)
                {
                    a[j] -= smax;
                }
                else
                {
                    a[j] -= max;
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                a[j] -= max;
            }
        }

        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}
