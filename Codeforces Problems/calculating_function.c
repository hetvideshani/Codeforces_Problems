#include <stdio.h>

int main()
{
    long long int n, sum = 0;
    scanf("%lld", &n);

    if (n % 2 == 0)
    {
        long long int x;
        x = n / 2;
        sum = (x * (x + 1)) - (x * x);
    }
    else
    {
        long long int x, y;
        x = n / 2;
        y = x + 1;
        sum = (x * (x + 1)) - (y * y);
    }

    printf("%lld", sum);

    return 0;
}