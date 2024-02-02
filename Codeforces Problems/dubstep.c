#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, last = -1;
    char s[201], new[201];
    scanf("%s", s);

    while (i < strlen(s))
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (i - 1 != last)
            {
                new[j] = ' ';
                j++;
            }
            last = i + 2;
            i += 3;
        }
        else
        {
            new[j] = s[i];
            i++;
            j++;
        }
    }

    new[j] = '\0';

    printf("%s", new);

    return 0;
}