#include <stdio.h>
#include <string.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, k, flag = 0, count = 0;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        for (j = 0; j < n - 1; j++)
        {
            flag = 0;
            for (k = 0; k < j; k++)
            {
                if (s[j] == s[k] && s[j + 1] == s[k + 1])
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}