#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n, min;
        scanf("%lld", &n);

        if (n <= 6)
        {
            printf("15\n");
        }
        else if (n <= 8)
        {
            printf("20\n");
        }
        else if (n <= 10)
        {
            printf("25\n");
        }

        else
        {
            long long int a[3];

            if (n % 6 == 0)
            {
                a[0] = (n / 6) * 15;
            }
            else
            {
                a[0] = ((n / 6) + 1) * 15;
            }

            if (n % 8 == 0)
            {
                a[1] = (n / 8) * 20;
            }
            else
            {
                a[1] = ((n / 8) + 1) * 20;
            }

            if (n % 10 == 0)
            {
                a[2] = (n / 10) * 25;
            }
            else
            {
                a[2] = ((n / 10) + 1) * 25;
            }

            min = a[0];
            for (int j = 1; j < 3; j++)
            {
                if (a[j] < min)
                {
                    min = a[j];
                }
            }
            printf("%lld\n", min);
        }
    }
}