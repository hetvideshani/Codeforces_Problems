#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, k;
    scanf("%d", &t);

    char *str;
    str = "Timur";

    for (i = 0; i < t; i++)
    {
        int n, flag = 0;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        if (n == 5)
        {
            for (j = 0; j < 6; j++)
            {
                flag = 0;
                for (k = 0; k < 6; k++)
                {
                    if (s[k] == str[j])
                    {
                        flag = 1;
                    }
                    if (flag == 1)
                    {
                        break;
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }

            if (flag == 0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}