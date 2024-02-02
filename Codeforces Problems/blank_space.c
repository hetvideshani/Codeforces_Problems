#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        j = 0;
        int count = 0, max = 0;

        while (j < n)
        {
            count = 0;
            if (a[j] == 0)
            {
                while (a[j] == 0)
                {
                    count++;
                    j++;
                }
                if (count >= max)
                {
                    max = count;
                }
            }

            else
            {
                j++;
            }
        }

        printf("%d\n", max);
    }
}