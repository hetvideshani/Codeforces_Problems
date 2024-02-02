#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int x, n, m, a, b;
        scanf("%d%d%d", &x, &n, &m);

        while (x > 0 && (m > 0 || n > 0))
        {
            a = (x / 2) + 10;
            b = x - 10;
            if (a <= b && n > 0)
            {
                x = a;
                n--;
            }
            else if (a > b && m > 0)
            {
                x = b;
                m--;
            }
            else if (m == 0)
            {
                x = a;
                n--;
            }
            else if (n == 0)
            {
                x = b;
                m--;
            }

            printf("%d %d %d\n", x, n, m);
        }

        if (x <= 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}