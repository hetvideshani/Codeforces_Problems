#include <stdio.h>
int main()
{
    int n, i, countp = 0, countn = 0;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] <= -1)
        {
            countn++;
        }
        else
        {
            countp++;
        }
    }

    if (countn == countp)
    {
        for ()
    }
}