#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, max = 0, flag = 1, count = 0, maxdiff = 0, temp;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] > max)
            {
                max = a[j];
            }
        }

        for (j = 0; j < n; j++)
        {
            temp = max - a[j];
            if (temp > maxdiff)
            {
                maxdiff = temp;
            }
        }

        printf("%d\n", maxdiff);
    }
}