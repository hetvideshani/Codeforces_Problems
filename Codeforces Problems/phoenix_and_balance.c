#include <stdio.h>
#include <math.h>

int main()
{
    int t, i, j, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int a, suma = 0, sumb = 0;
        scanf("%d", &a);

        for (j = 1; j <= a; j++)
        {
            if (suma > sumb)
            {
                sumb = sumb + pow(2, j);
            }
            else
            {
                suma = suma + pow(2, j);
            }
        }

        printf("%d\n", sumb - suma);
    }

    return 0;
}