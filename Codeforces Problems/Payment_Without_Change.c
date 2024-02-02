#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int a, b, n, s, d;
        scanf("%lld%lld%lld%lld", &a, &b, &n, &s);

        d = s / n;

        if (a >= d)
        {
            a -= d;
            s -= d * n;
        }
        else
        {
            s -= a * n;
        }

        if (b >= s)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}