#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, count = 0, ie = 0, io = 0, flage = 0, flago = 0;
        long long int sum = 0;
        scanf("%d", &n);

        int a[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] % 2 != 0 && flago == 0)
            {
                io = j;
                flago = 1;
            }
            if (a[j] % 2 == 0 && flage == 0)
            {
                ie = j;
                flage = 1;
            }
            sum += a[j];
        }

        if (flage == 0)
        {
            while (sum % 2 != 0)
            {
                // printf("%d\n", sum);
                sum -= a[io];
                a[io] /= 2;
                sum += a[io];
                count++;
            }
        }
        else
        {
            while (sum % 2 != 0)
            {
                // printf("%d\n", sum);
                sum -= a[ie];
                a[ie] /= 2;
                sum += a[ie];
                count++;
            }
        }

        printf("%d\n", count);
    }
}