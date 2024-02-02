#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, t, max = 0, index, flag = 0;
        scanf("%d%d", &n, &t);

        int a[n], b[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[j]);
        }

        j = 0;

        while (j < n)
        {
            if (a[j] == t)
            {
                if (b[j] > max)
                {
                    flag = 1;
                    index = j;
                    max = b[j];
                }
            }
            t--;
            j++;
        }
        if (a[j - 1] <= t)
        {
            printf("%d\n", n);
        }
        else if (flag == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", index + 1);
        }
    }
}