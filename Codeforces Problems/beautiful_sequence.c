#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, flag = 0, x, y, z, k, ff = 0, max = 0;
        scanf("%d", &n);

        int a[n];

        for (k = 0; k < n; k++)
        {
            scanf("%d", &a[k]);
            // if (a[k] > max)
            // {
            //     max = a[k];
            // }
            if (a[k] == 1)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {

            int last = n - 1, countk = 0;

            while (last > 0)
            {
                countk = 0;
                for (k = last; k >= 0; k--)
                {
                    countk++;
                }
                if (countk >= a[last])
                {
                    flag = 1;
                    printf("YES\n");
                    break;
                }
                last--;
            }
            if (flag == 0)
            {
                printf("NO\n");
            }
        }
    }
}