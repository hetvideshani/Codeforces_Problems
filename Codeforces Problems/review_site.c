#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, c1 = 0, c2 = 0;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] == 1 || a[j] == 3)
            {
                c1++;
            }
            // else if (a[j] == 2)
            // {
            //     c2++;
            // }
            // else if (a[j] == 3)
            // {
            //     if (c2 > c1)
            //     {
            //         c2++;
            //     }
            //     else
            //     {
            //         c1++;
            //     }
            // }
        }

        printf("%d\n", c1);
    }
}