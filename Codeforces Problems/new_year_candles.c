#include <stdio.h>
int main()
{
    int a, b, total = 0, digit = 0;
    scanf("%d%d", &a, &b);

    digit = 0;

    while (a > 0)
    {
        total += a;
        digit += a % b;
        a = a / b;
    }

    while (digit / b > 0)
    {
        total += digit / b;
        digit = (digit / b) + (digit % b);
    }

    printf("%d\n", total);
}