#include <stdio.h>
#include <string.h>
int main()
{
    int i, flag = 0, flags = 0;
    char s[101];
    scanf("%s", s);

    if (s[0] >= 97 && s[0] <= 122)
    {
        flags = 1;
    }

    for (i = 1; i < strlen(s); i++)
    {
        if (s[i] < 65 || s[i] > 90)
        {
            flag = 1;
            break;
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            flags = 1;
        }
    }

    if (flag == 1)
    {
        printf("%s", s);
    }

    else if (flags == 0)
    {
        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }
        }

        printf("%s", s);
    }

    else
    {
        if (s[0] > 90)
        {
            s[0] = s[0] - 32;
        }

        for (i = 1; i < strlen(s); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }
        }

        printf("%s", s);
    }
}