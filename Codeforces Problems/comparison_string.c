#include <stdio.h>

int main()
{
    int i, t;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, c = 1;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        for (j = 0; j < n - 1; j++)
        {
            if (s[j] != s[j + 1])
            {
                c++;
            }
        }

        if ((n + 1) % c == 0)
        {
            printf("%d\n", (n + 1) / c);
        }
        else
        {
            printf("%d\n", ((n + 1) / c) + 1);
        }
    }
}