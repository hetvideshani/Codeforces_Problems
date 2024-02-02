#include <stdio.h>
int main()
{
    int a[3], i, j, max = 0, b[6];

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    b[0] = a[0] + a[1] + a[2];   // 12
    b[1] = a[0] * a[1] * a[2];   // 24
    b[2] = (a[0] + a[1]) * a[2]; // 27
    b[3] = a[0] * (a[1] + a[2]); // 11
    b[4] = (a[0] * a[1]) + a[2]; // 11
    b[5] = a[0] + (a[1] * a[2]); // 25

    for (i = 0; i < 6; i++)
    {
        if (b[i] >= max)
        {
            max = b[i];
        }
    }

    printf("%d", max);
}