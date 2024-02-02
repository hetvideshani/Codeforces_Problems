#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, m, count = 0, digit, x, max = 0;
    scanf("%lld", &n);

    m = n;

    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        count++;
    }

    x = 0;
    n = 0;

    while (x < count)
    {
        n = (n * 10) + digit;
        x++;
    }

    if (n < m)
    {
        x = 0;
        n = 0;
        digit++;

        while (x < count)
        {
            n = (n * 10) + digit;
            x++;
        }
    }

    printf("%lld", n);

    return 0;
}