#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, count = 0, temp, rem;
        scanf("%d", &n);

        if (n < 10)
        {
            printf("%d\n", n);
        }
        else
        {
            temp = n;
            while (temp > 10)
            {
                if (temp > 1000)
                {
                    temp -= 1000;
                    count++;
                }
                else if (temp > 100)
                {
                    count += temp % 10;
                    temp /= 100;
                }
                else if (temp > 10)
                {
                    temp -= 10;
                    count++;
                }
            }

            rem = n % 10;

            if (rem >= count || rem == 0)
            {
                printf("%d\n", count + 9);
            }
            else
            {
                printf("%d\n", count + 8);
            }

            // printf("%d\n", count + 9);
        }
    }

    return 0;
}
