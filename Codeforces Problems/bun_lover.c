#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n, total = 0, sum = 0;
        scanf("%lld", &n);

        total = 4 * n;
        total += n;
        sum = (n - 1) * (n - 2);
        total += sum;

        printf("%lld\n", total);
    }
}