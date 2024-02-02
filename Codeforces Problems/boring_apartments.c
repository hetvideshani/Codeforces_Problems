#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, count = 0, ld, total = 0, j, k;

        scanf("%d", &n);

        ld = n % 10;

        while (n > 0)
        {
            n = n / 10;
            count++;
        }

        j = 1;

        while (j < ld)
        {
            if (j != ld)
            {
                total += 10;
            }
            j++;
        }

        for (k = 1; k <= count; k++)
        {
            total += k;
        }

        printf("%d\n", total);
    }
}