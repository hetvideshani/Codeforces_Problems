#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char p[27], s[51];
        int i = 0, j = 0, k = 0;
        scanf("%s", p);
        scanf("%s", s);

        // printf("%s\n%s", p, s);
        int sum = 0;

        while (p[j] != s[0])
        {
            j++;
        }

        for (int i = 1; i < strlen(s); i++)
        {
            k = 0;
            while (p[k] != s[i])
            {
                k++;
            }
            if (j > k)
            {
                sum += j - k;
            }
            else
            {
                sum += k - j;
            }
            j = k;
        }

        printf("%d\n", sum);
    }
    return 0;
}