#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int a, b, c, x, y, dog, cat;
        scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);

        if (a < x)
        {
            dog = x;
            c -= x - a;
        }
        else
        {
            dog = a;
        }

        if (b < y)
        {
            cat = y;
            c -= y - b;
        }
        else
        {
            cat = b;
        }

        if (dog >= x && cat >= y && c >= 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}