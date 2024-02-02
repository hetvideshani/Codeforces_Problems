#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b, n, max, count = 0;
        scanf("%d%d%d", &a, &b, &n);

        if (a > b)
        {
            max = a;
        }
        else
        {
            max = b;
        }

        while (max <= n)
        {
            if (a > b)
            {
                b += a;
            }
            else
            {
                a += b;
            }

            if (a > b)
            {
                max = a;
            }
            else
            {
                max = b;
            }

            count++;
        }

        printf("%d\n", count);
    }
}