#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int w, h, n, count = 0, flag = 0;
        scanf("%d%d%d", &w, &h, &n);

        if (w % 2 != 0 && h % 2 != 0 && n == 1)
        {
            printf("YES\n");
        }
        else if (w % 2 != 0 && h % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            for (j = 0; count < n; j++)
            {
                if (w % 2 == 0)
                {
                    w = w / 2;
                    count += 2;
                }
                else if (h % 2 == 0)
                {
                    h = h / 2;
                    count += 2;
                }
                else
                {
                    flag = 1;
                    printf("NO\n");
                    break;
                }
            }
            if (count != 0 && flag == 0)
            {
                printf("YES\n");
            }
            else if (flag == 0)
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}