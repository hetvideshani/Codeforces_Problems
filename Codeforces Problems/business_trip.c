#include <stdio.h>
int main()
{
    int k, a[12], i, j, temp, sum = 0, count = 0;

    scanf("%d", &k);

    for (i = 0; i < 12; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if (sum < k)
    {
        printf("-1");
        return 0;
    }

    for (i = 0; i < 12; i++)
    {
        for (j = i + 1; j < 12; j++)
        {
            if (a[i] <= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    i = 0;
    sum = 0;
    while (sum < k)
    {
        sum += a[i];
        count++;
        i++;
    }

    printf("%d", count);
    return 0;
}