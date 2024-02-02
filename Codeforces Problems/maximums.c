#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);

    long long int a[n], i, j, sum = 0, max = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    printf("%lld ", a[0]);
    sum = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%lld ", sum + a[i]);
        }
        else
        {
            sum += a[i];
            printf("%lld ", sum);
        }
    }

    return 0;
}