#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j, k, temp, flag = 0;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        if (n == 1)
        {
            printf("YES\n");
        }
        else
        {
            for (j = 0; j < n; j++)
            {
                for (k = j + 1; k < n; k++)
                {
                    if (a[j] > a[k])
                    {
                        temp = a[j];
                        a[j] = a[k];
                        a[k] = temp;
                    }
                }
            }

            for (j = 0; j < n - 1; j++)
            {
                if (a[j + 1] - a[j] > 1)
                {
                    flag = 1;
                    printf("NO\n");
                    break;
                }
            }
            if (flag == 0)
            {
                printf("YES\n");
            }
        }
    }
}