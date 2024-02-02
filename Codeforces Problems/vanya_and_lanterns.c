#include <stdio.h>
int main()
{
    int n, l, i, j, temp;
    float max = 0;
    scanf("%d%d", &n, &l);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] >= max)
        {
            max = a[i] - a[i - 1];
        }
    }

    printf("%f", max / 2);
}