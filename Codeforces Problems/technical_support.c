#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int countq = 0, counta = 0, n, flag = 0, cq = 0, ca = 0;
        scanf("%d", &n);

        char s[n + 1];

        scanf("%s", s);

        for (j = 0; j < n; j++)
        {
            if (s[j] == 'Q')
            {
                countq++;
            }
            else
            {
                counta++;
            }
        }

        if (counta >= countq && s[n - 1] == 'A' && s[0] == 'Q')
        {
            j = n - 1;
            while (j >= 0)
            {
                if (s[j] == 'A')
                {
                    if (flag == 1)
                    {
                        break;
                    }
                    ca++;
                }
                else if (s[j] == 'Q')
                {
                    cq++;
                    flag = 1;
                }
                j--;
            }

            if (ca < cq)
            {
                printf("No\n");
            }
            else
            {
                printf("Yes\n");
            }
        }

        else
        {
            printf("No\n");
        }
    }

    return 0;
}