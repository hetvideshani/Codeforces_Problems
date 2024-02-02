#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, flag = 0;
        scanf("%d", &n);

        long long int a[n], count = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &a[j]);
        }

        for (j = 0; j < n - 1; j++)
        {
            if (a[j] != 0 && flag == 0)
            {
                flag = 1;
                count += a[j];
            }
            else if (flag == 1)
            {
                if (a[j] == 0)
                {
                    count++;
                }
                else
                {
                    count += a[j];
                }
            }
        }

        printf("%lld\n", count);
    }
    return 0;
}