#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);

    int *n;
    int a[n], i, j, size = 0, temp, count = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    n = (int *)malloc(sizeof(int));

    for (i = 0; i < n; i++)
    {
        j = 0;
        while (j < size)
        {
            if ()
        }
    }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }

    // i = 0;

    // while (i < n)
    // {
    //     j = i + 1;
    //     while (a[i] == a[j])
    //     {
    //         j++;
    //     }
    //     c++;
    //     i = j;
    // }

    // printf("%d", c);
}