#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n, m, digit;
        scanf("%lld", &n);

        int flag = 0;

        m = n;

        while (n > 0)
        {
            digit = n % 10;
            if (digit != 0)
            {
                if (m % digit != 0)
                {
                    flag = 1;
                    break;
                }
            }
            n = n / 10;
        }

        // printf("%lld\n", m);

        while (flag == 1)
        {
            flag = 0;
            m++;
            n = m;
            while (n > 0)
            {
                digit = n % 10;
                if (digit != 0)
                {
                    if (m % digit != 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                n = n / 10;
            }

            // printf("%lld\n", m);
        }

        printf("%lld\n", m);
    }
    return 0;
}