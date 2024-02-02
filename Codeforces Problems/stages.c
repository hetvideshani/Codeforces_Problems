#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, i, j, count = 0, sum = 0;
    scanf("%d%d", &n, &k);

    char s[n], c;
    scanf("%s", s);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                c = s[i];
                s[i] = s[j];
                s[j] = c;
            }
        }
    }

    // printf("%s\n", s);

    sum = (int)s[0] - 96;
    // problem = belmopr

    // printf("%d\n", sum);

    i = 0;
    j = 1;
    count = 1;

    while (count < k && j < n && i < n - 1)
    {
        if (s[j] - s[i] > 1)
        {
            sum += (int)s[j] - 96;
            i = j;

            // printf("%c\n%d\n", s[j], sum);
            j++;
            count++;
        }
        else
        {
            j++;
        }
    }

    if (count == k)
    {
        printf("%d", sum);
    }
    else
    {
        printf("-1");
    }

    // printf("%s", s);
}