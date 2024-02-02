#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);

        if (d < b)
        {
            printf("-1\n");
        }
        else if (a == c)
        {
            printf("%d\n", (d - b) * 2);
        }
        else if (b == d)
        {
            if (c > a)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", (a - c));
            }
        }
        else if ((d - b) < (c - a))
        {
            printf("-1\n");
        }
        else
        {
            int x, y, z;
            y = d - b;
            x = a + y;
            z = x - c;

            printf("%d\n", z + y);
        }
    }
}