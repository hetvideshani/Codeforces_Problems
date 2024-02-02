#include <stdio.h>
#include <math.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        long int x1, p1, x2, p2;
        scanf("%ld%ld%ld%ld", &x1, &p1, &x2, &p2);
        float x, y;

        x = x1 * pow(10.0, p1);

        y = x2 * pow(10.0, p2);

        // printf("%f %f\n", x, y);

        if (x > y)
        {
            printf(">\n");
        }
        else if (x < y)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
}