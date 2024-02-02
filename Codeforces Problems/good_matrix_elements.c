#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;
    scanf("%d", &n);

    int a[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i][n / 2];
    }

    for (j = 0; j < n; j++)
    {
        if (j != n / 2)
        {
            sum += a[n / 2][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (i != n / 2)
        {
            sum += a[i][i];
        }
    }

    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        if (i != j)
        {
            sum += a[i][j];
        }
    }

    printf("%d", sum);
}