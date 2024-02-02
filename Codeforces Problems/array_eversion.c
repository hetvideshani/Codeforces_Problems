#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n], max = 0, count = 0, last, k = n - 1;

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            if (a[j] > max)
            {
                max = a[j];
            }
        }
        last = a[n - 1];

        while (last != max)
        {
            if (a[k] > last)
            {
                count++;
                last = a[k];
            }
            k--;
        }

        printf("%d\n", count);
    }

    return 0;
}