#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        long long int j, n;
        int flag = 0;

        scanf("%lld", &n);

        if (n % 2 != 0)
        {
            printf("YES\n");
            continue;
        }
        else if ((n / 2) % 2 != 0)
        {
            printf("YES\n");
            continue;
        }

        for (j = 3; j <= n / 3; j++)
        {
            if (n % j == 0)
            {
                if (j % 2 != 0 && (n / j) % 2 != 0)
                {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            printf("NO\n");
        }
    }
}