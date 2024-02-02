#include <stdio.h>
#include <math.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, m, k, t;
        scanf("%d%d%d", &n, &m, &k);

        t = n / k; // 3

        if (t >= m)
        {
            printf("%d\n", m);
        }

        else
        {
            int x = 0, a = 0, b = 0; // t=3,x=3, a=2,t - ceil(x / a)
            x = m - t;
            a = k - 1;

            if (x % a == 0)
            {
                b = x / a;
            }
            else
            {
                b = (x / a) + 1;
            }
            printf("%d\n", t - b);
        }
    }
}