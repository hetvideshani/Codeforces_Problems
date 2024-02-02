#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, k;
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
            int flag = 0;
            for (j = 0; j < n; j++)
            {
                for (k = j + 1; k < n; k++)
                {
                    if (a[j] == a[k])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}