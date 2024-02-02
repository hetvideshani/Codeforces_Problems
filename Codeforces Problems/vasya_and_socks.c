#include <stdio.h>
int main()
{
    int n, m, total, final;
    scanf("%d%d", &n, &m);
    final = m;

    total = n;

    while (n > 0)
    {
        if ((total + 1) % final == 0)
        {
            total++;
        }

        total += n / m; // 133+11+3+1+1

        n = n / m;
    }

    if ((total + 1) % final == 0)
    {
        total++;
    }

    printf("%d", total);
}