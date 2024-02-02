#include <stdio.h>
int main()
{
    int n, v;
    scanf("%d%d", &n, &v);

    if (v >= n - 1)
    {
        printf("%d", n - 1);
    }
    else
    {
        int ans = 0, count = 2, i, flag = 0, city = 1, x = 1;

        ans += v - 1;

        for (i = 1; i <= n - v; i++)
        {
            ans += i;
        }

        printf("%d", ans);
    }
}
