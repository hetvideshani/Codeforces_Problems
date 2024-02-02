#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);

    char a[n][m], ch, temp;

    scanf("%c", &ch);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%c", &a[i][j]);
        }
        scanf("%c", &ch);
    }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         printf("%c", a[i][j]);
    //     }
    // }

    for (i = 0; i < n; i++)
    {
        temp = a[i][0];
        for (j = 1; j < m; j++)
        {
            if (a[i][j] != temp)
            {
                printf("NO");
                return 0;
            }
        }
    }

    for (i = 0; i < n - 1; i++)
    {
        if (a[i][0] == a[i + 1][0])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}