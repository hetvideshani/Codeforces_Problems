#include <stdio.h>
#include <math.h>
int main()
{
    int t, x = 0;
    scanf("%d", &t);

    while (pow(2, x) < t)
    {
        x++;
    }

    printf("%d %d %d\n", x, (int)pow(2, x), (int)pow(2, x - 1));

    if ((int)pow(2, x) % t == 0)
    {
        printf("1");
        return 0;
    }

    if (pow(2, x) - t < t - pow(2, x - 1))
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", x - 1);
    }

    return 0;
}