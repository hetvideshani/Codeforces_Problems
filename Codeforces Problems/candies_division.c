#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, k, total = 0, digit = 0;
        scanf("%d%d", &n, &k);

        total += (n / k) * k;

        digit = n % k;

        if (digit >= k / 2)
        {
            digit = k / 2;
        }

        total += digit;

        printf("%d\n", total);
    }
}