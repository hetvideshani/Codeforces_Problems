#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i, j;
        scanf("%d", &n);

        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        if (a[0] == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}