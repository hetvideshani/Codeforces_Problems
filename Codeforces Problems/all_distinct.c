#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, k, count = 0;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (a[j] == a[k])
                {
                    a[j] = 0;
                    a[k] = 0;
                }
            }
        }

        for (j = 0; j < n; j++)
        {
            if (a[j] != 0)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}
