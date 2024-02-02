#include <stdio.h>
int main()
{
    int n, k, r, g, b, sum = 0;
    scanf("%d%d", &n, &k);

    r = 2 * n; // 30
    g = 5 * n; // 75
    b = 8 * n; // 120

    if (r % k != 0)
    {
        sum += (r / k) + 1;
    }
    else
    {
        sum += r / k; // 5
    }

    if (g % k != 0)
    {
        sum += (g / k) + 1; //
    }
    else
    {
        sum += g / k;
    }

    if (b % k != 0)
    {
        sum += (b / k) + 1;
    }
    else
    {
        sum += b / k;
    }

    printf("%d", sum);
}