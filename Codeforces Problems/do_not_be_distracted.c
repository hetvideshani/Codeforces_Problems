#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j = 0, k = 1, flag = 0, x;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        while (k < n)
        {
            while (k < n)
            {
                if (s[j] != s[k])
                {
                    break;
                }
                j++;
                k++;
            }
            for (x = k; x < n; x++)
            {
                if (s[j] == s[x])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
            else
            {
                j++;
                k++;
            }
        }

        if (flag == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}