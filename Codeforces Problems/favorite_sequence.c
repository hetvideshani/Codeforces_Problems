#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i, j;
        scanf("%d", &n);

        long int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (i = 0, j = n - 1; i < n / 2; i++, j--)
        {
            printf("%d %d ", a[i], a[j]);
        }

        if (n % 2 != 0)
        {
            printf("%d ", a[i]);
        }

        printf("\n");
    }
    return 0;
}