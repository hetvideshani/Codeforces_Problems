#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j, index = 0;
        scanf("%d", &n);

        char s[n + 1], p[n + 1], ch;
        scanf("%s", s);

        ch = s[0];

        for (j = 1; j < n; j++)
        {
            if (s[j] <= ch)
            {
                ch = s[j];
                index = j;
            }
        }

        // printf("%c %d", ch, index);

        p[0] = ch;

        for (j = 1; j <= index; j++) // abaacd
        {                            // index = 3
            p[j] = s[j - 1];         // aaba
        }

        for (j = index + 1; j < n; j++)
        {
            p[j] = s[j];
        }

        p[j] = '\0';

        printf("%s\n", p);
    }
}