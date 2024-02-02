#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, h, m, flag = 0, min, max;
        scanf("%d%d%d", &n, &h, &m);

        int a[n][2];

        for (int j = 0; j < n; j++)
        {
            scanf("%d%d", &a[j][0], &a[j][1]);
            if (a[j][0] == h && a[j][1] == m)
            {
                printf("0 0\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            min = 0;
            max = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[])
            }
        }
    }
}