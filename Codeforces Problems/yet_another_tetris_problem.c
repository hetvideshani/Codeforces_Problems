#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, max = 0, sum = 0, diff, flag = 0;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            if (a[j] >= max)
            {
                max = a[j];
            }
        }

        for (j = 0; j < n; j++)
        {
            if (a[j] != max)
            {
                diff = max - a[j];

                if (diff % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}