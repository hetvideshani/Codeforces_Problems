#include <stdio.h>
int main()
{
    int n, i, diff, flag = 0;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (n == 1)
    {
        printf("%d", a[0]);
    }
    else if (n == 2)
    {
        diff = a[1] - a[0];
        printf("%d", a[1] + diff);
    }
    else
    {
        diff = a[1] - a[0];

        for (i = 2; i < n; i++)
        {
            if (a[i] - a[i - 1] != diff)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d", a[n - 1] + diff);
        }
        else
        {
            printf("%d", a[n - 1]);
        }
    }
}