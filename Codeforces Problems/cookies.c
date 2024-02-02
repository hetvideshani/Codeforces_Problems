#include <stdio.h>
int main()
{
    int n, i, sum = 0, count = 0;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    for (i = 0; i < n; i++)
    {
        if ((sum - a[i]) % 2 == 0)
        {
            count++;
        }
    }

    printf("%d", count);
}