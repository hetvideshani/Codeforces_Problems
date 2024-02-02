#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long int a, b, c, min, max;
        scanf("%ld%ld%ld", &a, &b, &c);

        if (a == b)
        {
            if (c % 2 != 0)
            {
                printf("First\n");
            }
            else
            {
                printf("Second\n");
            }
            continue;
        }
        if (a > b)
        {
            min = b;
            max = a;
        }
        else
        {
            min = a;
            max = b;
        }

        if (min + c < max)
        {
            if (max == a)
            {
                printf("First\n");
            }
            else
            {
                printf("Second\n");
            }
        }
        else
        {
            c = c - (max - min);

            if (c % 2 == 0)
            {
                printf("Second\n");
            }
            else
            {
                if (min == a)
                {
                    printf("Second\n");
                }
                else
                {
                    printf("First\n");
                }
            }
            // if (c % 2 != 0 && min == a)
            // {
            //     printf("Second\n");
            // }
            // else if (c % 2 != 0 && min == b)
            // {
            //     printf("First\n");
            // }
            // // 2 1 5
            // if (c % 2 == 0 && min == a)
            // {
            //     printf("Second\n");
            // }
            // else if (c % 2 == 0 && min == b)
            // {
            //     printf("First\n");
            // }
        }
    }
    return 0;
}