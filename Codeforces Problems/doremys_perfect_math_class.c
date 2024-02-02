#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, k, max = 0, x, flag = 0, count = 0;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        count = n;

        // for (j = 0; j < n; j++)
        // {
        //     for (k = j + 1; k < n; k++)
        //     {
        //         if (a[j] > a[k])
        //         {
        //             max = a[j];
        //         }
        //         else
        //         {
        //             max = a[k];
        //         }

        //         for (x = 0; x < n; x++)
        //         {
        //             if (max == a[x])
        //             {
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //     }
        // }

        while (flag != 0)
        {
            for (j = 0; j < n; j++)
            {
                for (k = j + 1; k < n; k++)
                {
                    if (a[j] > a[k])
                    {
                        max = a[j];
                    }
                    else
                    {
                        max = a[k];
                    }
                }
            }
        }
    }
}