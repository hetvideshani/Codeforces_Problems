#include <stdio.h>
int main()
{
    int i, j, n, c;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] <= a[i])
        {
            c = a[i] % b[i];
            if (c == 0)
            {
                printf("0\n");
            }
            else
            {
                int d;
                d = b[i] - c;

                printf("%d\n", d);
            }
        }
        else
        {
            c = b[i] - a[i];
            printf("%d\n", c);
        }
    }
}
