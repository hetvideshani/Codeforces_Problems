#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int i, n;
        float sum = 0;
        scanf("%d", &n);

        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }

        if (sum / n == 1)
        {
            printf("0\n");
        }

        else if (sum / n > 1)
        {
            printf("%d\n", (int)sum - n);
        }

        else
        {
            printf("1\n");
        }
    }
}