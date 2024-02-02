#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    int a[7];

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }

    while (1)
    {
        for (i = 0; i < 7; i++)
        {
            sum += a[i];

            if (sum >= n)
            {
                printf("%d", i + 1);
                return 0;
            }
        }
    }
}