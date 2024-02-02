#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, count = 0, total;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            if (a[j] == 1)
            {
                count++;
            }
        }

        total = n - (count / 2);

        printf("%d\n", total);
    }
}