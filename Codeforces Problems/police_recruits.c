#include <stdio.h>
int main()
{
    int n, i, sump = 0, count = 0;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sump += a[i];
        }
        else if (a[i] < 0 && sump == 0)
        {
            count++;
        }
        else
        {
            sump--;
        }
    }

    printf("%d", count);
}