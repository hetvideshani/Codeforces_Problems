#include <stdio.h>
int main()
{
    int n, q;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &q);

    for (int i = 0; i < q; i++)
    {
        int t, count = 0;
        scanf("%d", &t);

        for (int j = 0; j < n; j++)
        {
            if (a[j] <= t)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}