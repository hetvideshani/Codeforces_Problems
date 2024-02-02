#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int h, m, hour;
        scanf("%d%d", &h, &m);

        hour = (24 - h) * 60;

        printf("%d\n", hour - m);
    }
}