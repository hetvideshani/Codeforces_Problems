#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i, j, min, diff, x, y;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (a[1] - a[0] < 0)
    {
        diff = (a[1] - a[0]) * -1;
    }
    else
    {
        diff = a[1] - a[0];
    }

    min = diff;
    x = 0;
    y = 1;

    for (i = 1; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] < 0)
        {
            diff = (a[i + 1] - a[i]) * -1;
        }
        else
        {
            diff = a[i + 1] - a[i];
        }

        if (diff < min)
        {
            min = diff;
            x = i;
            y = i + 1;
        }
    }

    if (a[0] - a[n - 1] < 0)
    {
        diff = (a[0] - a[n - 1]) * -1;
    }
    else
    {
        diff = a[0] - a[n - 1];
    }

    if (diff < min)
    {
        min = diff;
        x = 0;
        y = n - 1;
    }

    printf("%d %d", x + 1, y + 1);
}