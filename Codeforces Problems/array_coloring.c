#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i, sum = 0;
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }

        if (sum % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}