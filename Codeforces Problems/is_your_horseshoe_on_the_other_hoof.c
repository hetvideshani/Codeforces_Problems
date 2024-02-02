#include <stdio.h>
int main()
{
    int a[4], i, count = 0, j;

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    // if (count )
    // {
    //     printf("%d", 3);
    // }
    // else
    {
        printf("%d", count);
    }
}