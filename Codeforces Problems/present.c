#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int a[n], j, k;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (j = 1; j <= n; j++)
    {
        for (k = 0; k < n; k++)
        {
            if (j == a[k])
            {
                break;
            }
        }
        printf("%d ", k + 1);
    }
}