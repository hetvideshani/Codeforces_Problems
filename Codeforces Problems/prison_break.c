#include <stdio.h>

int main()
{
    int t, i, j, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        printf("%d\n", a * b);
    }
}