#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, k, flag = 0;
        scanf("%d", &n);

        int a[n], j, count = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 1; j < n; j++)
        {
            if (a[j] == a[j - 1])
            {
                a[j]++;
            }
        }

        for (j = 0; j < n; j++)
        {
            flag = 0;
            for (k = j + 1; k < n; k++)
            {
                if (a[j] == a[k])
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}