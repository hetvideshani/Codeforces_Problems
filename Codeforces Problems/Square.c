#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a1, b1, a2, b2, flag = 0, min1, min2, maxf;
        scanf("%d%d%d%d", &a1, &a2, &b1, &b2);

        // if (a1 == b1)
        // {
        //     if (a2 + b2 == a1)
        //     {
        //         flag = 1;
        //     }
        // }
        // else if (a1 == b2)
        // {
        //     if (a2 + b1 == a1)
        //     {
        //         flag = 1;
        //     }
        // }
        // else if (a2 == b1)
        // {
        //     if (a1 + b2 == b1)
        //     {
        //         flag = 1;
        //     }
        // }
        // else if (a2 == b2)
        // {
        //     if (a1 + b1 == a2)
        //     {
        //         flag = 1;
        //     }
        // }

        if (a1 == b1 || a1 == b2 || a2 == b1 || a2 == b2)
        {
            min1 = min(a1, a2);
            min2 = min(b1, b2);

            maxf = max(a1, a2);

            if (min1 + min2 == maxf)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}