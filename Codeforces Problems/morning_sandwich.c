#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int b, c, h;

        scanf("%d%d%d", &b, &c, &h);

        if (b - 1 < c + h)
        {
            printf("%d\n", ((b - 1) * 2) + 1);
        }
        else
        {
            printf("%d\n", ((c + h) * 2) + 1);
        }
    }
    return 0;
}