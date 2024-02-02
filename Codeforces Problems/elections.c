#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int max = 0, a[3], cmax = 0;

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] >= max)
            {
                max = a[j];
            }
        }

        // for (j = 0; j < 3; j++)
        // {
        //     if (a[j] == max)
        //     {
        //         printf("%d ", a[j] + 1);
        //     }
        //     else
        //     {
        //         printf("%d ", max - a[j] + 1);
        //     }
        // }

        // printf("\n");

        for (j = 0; j < 3; j++)
        {
            if (a[j] == max)
            {
                cmax++;
            }
        }

        if (cmax == 3)
        {
            printf("1 1 1\n");
        }
        else if (cmax == 2)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", max - a[j] + 1);
            }
            printf("\n");
        }
        else
        {
            for (j = 0; j < 3; j++)
            {
                if (a[j] == max)
                {
                    printf("0 ");
                }
                else
                {
                    printf("%d ", max - a[j] + 1);
                }
            }
            printf("\n");
        }
    }

    return 0;
}