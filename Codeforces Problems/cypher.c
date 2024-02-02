#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j, k;
        scanf("%d", &n);

        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n; j++)
        {
            int x;
            scanf("%d", &x);

            char s[x];
            scanf("%s", s);

            for (k = x - 1; k >= 0; k--)
            {
                if (s[k] == 'D')
                {
                    if (a[j] == 9)
                    {
                        a[j] = 0;
                    }
                    else
                    {
                        a[j]++;
                    }
                }
                else
                {
                    if (a[j] == 0)
                    {
                        a[j] = 9;
                    }
                    else
                    {
                        a[j]--;
                    }
                }

                // printf("%d ", a[j]);
            }
            // printf("\n");
        }

        for (j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}