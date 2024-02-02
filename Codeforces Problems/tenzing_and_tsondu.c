#include <stdio.h>

int main()
{
    int i, j, t, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int m, n;
        scanf("%d%d", &n, &m);
        long int a[n], b[n], suma = 0, sumb = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%ld", &a[j]);

            suma += a[j];
        }

        for (j = 0; j < m; j++)
        {
            scanf("%ld", &b[j]);

            sumb += b[j];
        }

        if (suma == sumb)
        {
            printf("Draw\n");
        }
        else if (suma > sumb)
        {
            printf("Tsondu\n");
        }
        else if (suma < sumb)
        {
            printf("Tenzing\n");
        }
    }
}
