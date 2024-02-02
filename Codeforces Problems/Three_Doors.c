#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, i, s, c = 0;
        scanf("%d", &x);

        int a[3];

        for (i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
        }

        s = a[x - 1];
        c = 1;

        while (s != 0)
        {
            s = a[s - 1];

            c++;
        }

        if (c == 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}