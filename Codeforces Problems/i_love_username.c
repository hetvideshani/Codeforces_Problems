#include <stdio.h>

int main()
{
    int t, i, j, min, max, countp = 1, maxp = 0, countn = 1, maxn = 0, count = 0;
    scanf("%d", &t);
    int a[t];

    for (i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for (j = 1; j < t; j++)
    {
        if (a[j] < min)
        {
            count++;
            min = a[j];
        }
        else if (a[j] > max)
        {
            count++;
            max = a[j];
        }
    }

    printf("%d", count);

    return 0;
}
