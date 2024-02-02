#include <stdio.h>

int main()
{
    int i, j, t, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, max = 0, temp, flag = 0;
        scanf("%d", &n);
        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            if (a[j] > max)
            {
                max = a[j];
            }
        }

        if (n < 3)
        {
            flag = 0;
        }

        else
        {
            for (j = 0; j < n; j++)
            {
                temp = max;
                for (k = j; k < n; k++)
                {
                    if (a[k] <= temp)
                    {
                        temp = a[k];
                        a[k] = a[j];
                        a[j] = temp;
                    }
                }
            }

            for (j = 0; j < n - 2; j++)
            {
                if (a[j] == a[j + 1] && a[j + 1] == a[j + 2])
                {
                    flag = 1;
                    printf("%d\n", a[j]);
                    break;
                }
            }
        }

        if (flag == 0)
        {
            printf("-1\n");
        }
    }

    return 0;
}