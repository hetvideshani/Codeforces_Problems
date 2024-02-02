#include <stdio.h>
int main()
{
    int m, n, i, j, flag = 0;
    scanf("%d%d", &m, &n);

    for (i = m + 1; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}