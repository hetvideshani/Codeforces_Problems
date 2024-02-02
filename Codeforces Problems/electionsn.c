#include <stdio.h>
int main()
{
    int n, i, sum = 0, max = 0, tempsum = 0;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];

        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        tempsum += max - a[i];
    }

    while (sum >= tempsum)
    {
        tempsum += n;
        max++;
    }

    printf("%d", max);

    return 0;
}
// sum = 11
// tempsum = 9