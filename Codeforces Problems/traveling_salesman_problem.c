#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j, sum = 0;
        scanf("%d", &n);

        for (j = 0; j < n; j++)
        {
            int a, b;

            scanf("%d%d", &a, &b);

            if (b == 0 && a != 0)
            {
                if (a < 0)
                {
                    sum += (a * (-2));
                }
                else
                {
                    sum += (a * 2);
                }
            }
            else if (a == 0 && b != 0)
            {
                if (b < 0)
                {
                    sum += (b * (-2));
                }
                else
                {
                    sum += (b * 2);
                }
            }
        }

        printf("%d\n", sum);
    }
}