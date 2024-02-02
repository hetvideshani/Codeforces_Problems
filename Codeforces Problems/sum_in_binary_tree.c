#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n, sum = 0;

        scanf("%lld", &n);

        sum = n;

        while (n > 0)
        {
            sum += n / 2;
            n = n / 2;
        }

        printf("%lld\n", sum);
    }
}
