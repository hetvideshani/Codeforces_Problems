#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, min, count = 0, flag1 = 0, flag2 = 0;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] != 0)
            {
                flag1 = 1;
            }
            if (j > 0 && a[j] != a[j - 1])
            {
                flag2 = 1;
            }
        }

        if (flag1 == 0)
        {
            printf("0\n");
        }
        else if (flag2 == 0)
        {
            printf("-1\n");
        }
        else
        {
            min = a[0];

            for (j = 0; j < n; j++)
            {
                if (a[j] < min)
                {
                    min = a[j];
                }
            }

            for (j = 0; j < n; j++)
            {
                if (a[j] == min)
                {
                    count++;
                }
            }

            printf("%d\n", n - count);
        }
        }
}