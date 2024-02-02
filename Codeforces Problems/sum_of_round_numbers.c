#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, c = 1, x = 1, j;
        int *p;
        p = (int *)malloc(1 * sizeof(int));
        scanf("%d", &n);

        while (n > 0)
        {
            if (n % 10 != 0)
            {
                p = (int *)realloc(p, x * sizeof(int));
                p[x - 1] = (n % 10) * c;
                x++;
            }
            c *= 10;
            n = n / 10;
        }

        printf("%d\n", x - 1);

        for (j = 0; j < x - 1; j++)
        {
            printf("%d ", p[j]);
        }

        printf("\n");
    }

    return 0;
}