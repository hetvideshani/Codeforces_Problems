#include <stdio.h>
int main()
{
    int n, c;
    scanf("%d%d", &n, &c);

    int a[n], i, j, count = 1;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= c)
        {
            count++;
        }
        else
        {
            count = 1;
        }
    }

    printf("%d", count);
}