#include <stdio.h>
int main()
{
    int m, n, i, j, min, max = 0;
    scanf("%d%d", &m, &n);

    int a[m][n], arr[m];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }

        min = a[i][0];

        for (j = 0; j < n; j++)
        {
            if (a[i][j] <= min)
            {
                min = a[i][j];
            }
        }

        arr[i] = min;
    }

    for (i = 0; i < m; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d", max);
}