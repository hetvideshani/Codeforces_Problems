#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[(2 * 100000) + 1];
        int i = 0, c = 0, j, count = 0, flag = 0, rem;
        scanf("%s", s);

        while (i < strlen(s))
        {
            c = 0;
            while (c >= 0 && i < strlen(s))
            {
                if (c == 0)
                {
                    rem = i;
                }
                flag = 0;
                for (j = rem; j < i; j++)
                {
                    if (s[j] == s[i])
                    {
                        flag = 1; // lollipops
                        break;
                    }
                }
                if (flag == 0)
                {
                    c++;
                }
                if (c == 4)
                {
                    break;
                }
                i++;
            }
            count++;
        }

        printf("%d\n", count);
    }
}