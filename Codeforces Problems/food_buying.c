#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, total = 0, c = 0, count = 0, temp = 1, final;
        scanf("%d", &n);
        total = 0;
        if (n < 10)
        {
            printf("%d\n", n);
        }
        else
        {
            total = n;
            final = n;

            while (n > 0)
            {
                n = n / 10;
                count++;
            }

            while (c < count - 1)
            {
                temp *= 10;
                c++;
            }

            // while (final >= temp)
            // {
            //     final -= temp;
            //     final += temp / 10;
            //     total += temp / 10;
            // }

            while (temp >= 10)
            {
                while (final >= temp)
                {
                    final -= 10;
                    final++;
                    total++;
                }
                temp /= 10;
            }

            if (total % 10 == 0)
            {
                total++;
            }

            printf("%d\n", total);
        }
    }
}