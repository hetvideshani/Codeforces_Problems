#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i;
        scanf("%d", &n);

        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        if (n == 1)
        {
            printf("1\n");
            continue;
        }

        i = 0;

        while (i < n - 1)
        {
            if (a[i] < a[i + 1])
            {
                while (a[i] < a[i + 1])
                {
                    printf("1");
                    i++;
                }
            }

            i++;
        }
    }
    return 0;
}