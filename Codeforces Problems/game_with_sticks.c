#include <stdio.h>

int main()
{
    int n, m, total, count = 0;
    scanf("%d%d", &n, &m);

    total = n * m;

    while (total > 0)
    {
        total -= n + m - 1;
        n--;
        m--;
        count++;
    }

    if (count == 1)
    {
        printf("Akshat");
    }
    else if (count % 2 == 0)
    {
        printf("Malvika");
    }
    else
    {
        printf("Akshat");
    }

    return 0;
}