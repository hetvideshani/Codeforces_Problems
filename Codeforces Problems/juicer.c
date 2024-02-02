#include <stdio.h>

int main()
{
    long long int n, b, d;
    long long int sum = 0;
    scanf("%lld%lld%lld", &n, &b, &d);

    long long int a[n];

    for (int j = 0; j < n; j++)
    {
        scanf("%lld", &a[j]);
        if (a[j] < b)
        {
            sum += a[j];
        }
    }

    if (sum % d == 0 && sum >= d)
    {
        printf("%lld", (sum / d) - 1);
    }
    else
    {
        printf("%lld", sum / d);
    }
}
