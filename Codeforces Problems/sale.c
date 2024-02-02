#include <stdio.h>
int main()
{
    int n, m, i, sumn = 0, countn = 0;
    scanf("%d%d", &n, &m);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0 && countn < m)
        {
            countn++;
            sumn += a[i];
        }
    }

    printf("%d", sumn * -1);
}