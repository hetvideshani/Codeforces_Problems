#include <stdio.h>
int main()
{
    int n, m, i, sum = 0;
    scanf("%d%d", &n, &m);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= m)
        {
            printf("%d ", sum / m);
            sum -= (sum / m) * m;
        }
        else
        {
            printf("0 ");
        }
    }
}