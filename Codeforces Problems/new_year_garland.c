#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int a[3], j, max = 0, sum = 0, flag = 0;

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] >= max)
            {
                max = a[j];
            }
        }

        for (j = 0; j < 3; j++)
        {
            if (a[j] != max || flag == 1)
            {
                sum += a[j];
            }
            if (a[j] == max)
            {
                flag = 1;
            }
        }

        if (sum >= max - 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}