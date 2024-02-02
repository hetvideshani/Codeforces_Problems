#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a[3], n, max = 0, total = 0, last;

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] > max)
            {
                max = a[j];
            }
        }

        scanf("%d", &n);

        for (int j = 0; j < 3; j++)
        {
            total += max - a[j];
        }

        if (total > n)
        {
            printf("NO\n");
        }
        else
        {
            if ((n - total) % 3 == 0)
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