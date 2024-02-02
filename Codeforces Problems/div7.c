#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        if (n % 7 == 0)
        {
            printf("%d\n", n);
        }
        else
        {
            int digit, a, b;
            digit = n % 7;

            a = n + (7 - digit);
            b = n - digit;

            if (a == 7)
            {
                printf("%d\n", b);
            }
            else if (b == 7)
            {
                printf("%d\n", a);
            }
            else if (a - n < n - b)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("%d\n", b);
            }
        }
    }
    return 0;
}