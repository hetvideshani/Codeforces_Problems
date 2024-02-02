#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, counte = 0, counto = 0, c1 = 0;
        scanf("%d", &n);

        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            if (a[j] == 1)
            {
                c1 = 1;
            }
            if (a[j] % 2 == 0)
            {
                counte++;
            }
            else
            {
                counto++;
            }
        }

        if (counte == 0 || counto == 0)
        {
            printf("YES\n");
        }
        else if (c1 == 1)
        {
            printf("YES\n");
        }
        else
        {
        }
    }
}