#include <stdio.h>

int main()
{
    int n, m, i, j, temp, min;
    scanf("%d%d", &n, &m);

    int a[m];

    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < m; i++)
    {
        for (j = i; j < m; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    min = a[m - 1];

    for (i = 0, j = n - 1; j < m; i++, j++)
    {
        if (a[j] - a[i] <= min)
        {
            min = a[j] - a[i];
        }
    }

    printf("%d", min);

    return 0;
}