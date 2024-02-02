#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, count = 0;

        scanf("%d", &n);

        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
            }
            else
            {
                n = n * 2;
            }
            count++;
        }

        if (n == 1)
        {
            printf("%d\n", count);
        }
        else
        {
            printf("-1\n");
        }
    }
}