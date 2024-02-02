#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, min1, min2, j, final;
        scanf("%d", &n);

        for (j = 0; j < n; j++)
        {
            int p, total = 0;
            char c, s[3];
            scanf("%d", &p);
            scanf("%c", &c);
            scanf("%s", s);

            if (s == "00")
            {
                continue;
            }
            else if (s == "10")
            {
                if (p < min1)
                {
                    min1 = p;
                }
            }
            else if (s == "01")
            {
                if (p < min2)
                {
                    min2 = p;
                }
            }
            else if (s == "11")
            {
                if (p < (min1 + min2))
                {
                    final = p;
                }
            }
            // printf("%d ", p);
            // printf("%s\n", s);
        }

        if (min1 + min2 < final)
        {
            printf("%d\n", min1 + min2);
        }
        else
        {
            printf("%d\n", final);
        }
    }
}