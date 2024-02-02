#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int i, count = 0, c = 0;
        char s[101];
        scanf("%s", s);

        if (strlen(s) == 1)
        {
            if (s[0] == '^')
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }

            continue;
        }

        if (strlen(s) == 2)
        {
            if (s[0] == '^' && s[1] == '^')
            {
                printf("0\n");
            }
            else if (s[0] == '_' && s[1] == '^')
            {
                printf("1\n");
            }
            else if (s[0] == '^' && s[1] == '_')
            {
                printf("1\n");
            }
            else if (s[0] == '_' && s[1] == '_')
            {
                printf("3\n");
            }
            continue;
        }

        i = 0;

        while (s[i] != '^' && i < strlen(s))
        {
            count++;
            i++;
        }

        if (i == strlen(s))
        {
            printf("%d\n", count + 1);
            continue;
        }

        while (i < strlen(s))
        {
            c = 0;
            if (s[i] == '^')
            {
                i++;
                while (s[i] == '_')
                {
                    i++;
                    c++;
                }
            }
            else
            {
                i++;
            }
            if (c > 0 && i == strlen(s))
            {
                count += c;
            }
            else if (c > 1)
            {
                count += c - 1;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}