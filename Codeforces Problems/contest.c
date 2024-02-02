#include <stdio.h>
int main()
{
    int a, b, c, d, x1, y1, x2, y2, f1, f2;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    x1 = 3 * a / 10;
    y1 = a - (a * c / 250);

    x2 = 3 * b / 10;
    y2 = b - (b * d / 250);

    if (x1 > y1)
    {
        f1 = x1;
    }
    else
    {
        f1 = y1;
    }

    if (x2 > y2)
    {
        f2 = x2;
    }
    else
    {
        f2 = y2;
    }

    if (f1 > f2)
    {
        printf("Misha");
    }
    else if (f2 > f1)
    {
        printf("Vasya");
    }
    else
    {
        printf("Tie");
    }
}