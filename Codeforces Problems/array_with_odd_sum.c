#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, sum = 0, counte = 0, counto = 0;
        scanf("%d", &n);
        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            sum += a[j];

            if (a[j] % 2 == 0)
            {
                counte++;
            }
            else
            {
                counto++;
            }
        }

        if (sum % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {
            if (counte == 0 || counto == 0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }

    return 0;
}