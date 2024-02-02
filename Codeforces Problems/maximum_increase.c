#include <stdio.h>
int main()
{
    int n, i, j, count = 0, max = 0;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    j = 1;
    while (j < n)
    {
        count = 0;
        while (a[j] > a[i] && j < n)
        {
            count++;
            j++;
            i++;
        }

        if (count > max)
        {
            max = count;
        }

        i++;
        j++;
    }

    printf("%d", max + 1);
}