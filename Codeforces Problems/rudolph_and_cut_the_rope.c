#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, k, count = 0;
        scanf("%d", &n);

        int a[n][2];

        for (j = 0; j < n; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d", &a[j][k]);
            }
        }

        for (j = 0; j < n; j++)
        {
            if (a[j][0] > a[j][1])
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}
