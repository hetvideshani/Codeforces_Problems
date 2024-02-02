#include <stdio.h>
#include <math.h>

int main()
{
    int t, i;
    // scanf("%d", &t);

    // for (i = 0; i < t; i++)
    // {
    int x, y, n, b, c;
    float a, diff;
    scanf("%d%d%d", &x, &y, &n);

    a = (float)n / x;

    c = floor(a);

    diff = a - c;

    printf("%f %d %f\n", a, c, diff);

    if (diff >= 0.5)
    {
        printf("%d", (c * x) + y);
    }
    else

    {
        printf("%d", ((c - 1) * x) + y);
    }

    //}
}

// 7 5 12345

//