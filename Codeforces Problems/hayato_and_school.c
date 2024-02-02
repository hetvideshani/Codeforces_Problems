#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, counto = 0, counte = 0, co = 0, ce = 0;
        scanf("%d", &n);
        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] % 2 != 0)
            {
                counto++;
            }
            else
            {
                counte++;
            }
        }

        if (counto >= 3)
        {
            int count = 0;
            printf("YES\n");
            for (j = 0; j < n; j++)
            {
                if (a[j] % 2 != 0)
                {
                    printf("%d ", j + 1);
                    count++;
                }
                if (count == 3)
                {
                    break;
                }
            }
        }
        else if (counte >= 2 && counto >= 1)
        {
            printf("YES\n");
            for (j = 0; j < n; j++)
            {
                if (co < 1)
                {
                    if (a[j] % 2 != 0)
                    {
                        printf("%d ", j + 1);
                        co++;
                    }
                }
                if (ce < 2)
                {
                    if (a[j] % 2 == 0)
                    {
                        printf("%d ", j + 1);
                        ce++;
                    }
                }
                if (ce == 2 && co == 1)
                {
                    break;
                }
            }
        }
        else
        {
            printf("NO");
        }

        printf("\n");
    }

    return 0;
}