#include <stdio.h>
int main()
{
    int n, i, j, count = 0, max = 0;
    scanf("%d", &n);

    char s[n + 1], p[3];

    scanf("%s", s);

    for (i = 0; i < n - 1; i++)
    {
        count = 0;
        for (j = i + 1; j < n - 1; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
            {
                count++;
            }
        }
        if (count >= max)
        {
            max = count;
            p[0] = s[i];
            p[1] = s[i + 1];
        }
    }

    p[2] = '\0';

    printf("%s", p);
}