#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, m, j, k, flag = 0, count = 0;
        scanf("%d%d", &n, &m);

        int a[n], b[m], final[n];

        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[j]);
        }

        for (j = 0; j < n; j++)
        {
            a[j] = j + 1;
        }

        for (j = 0; j < n; j++)
        {
            final[j] = 0;
        }

        for (j = 0; j < m; j++)
        {
            count++;
            flag = 0;
            for (k = 0; k < n; k++)
            {
                if (a[k] == b[j])
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                final[a[n - 1] - 1] = count;
                for (k = n - 1; k > 0; k--)
                {
                    a[k] = a[k - 1];
                }
                a[0] = b[j];
            }
        }

        for (j = 0; j < n; j++)
        {
            if (final[j] == 0)
            {
                final[j] = -1;
            }
        }

        for (j = 0; j < n; j++)
        {
            printf("%d ", final[j]);
        }

        printf("\n");

        // for (j = 0; j < n; j++)
        // {
        //     printf("%d ", b[j]);
        // }
    }
}