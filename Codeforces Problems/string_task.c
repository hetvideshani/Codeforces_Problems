#include <stdio.h>
#include <string.h>

int main()
{
    int i, j = 0;
    char s[101], new[200];
    scanf("%s", s);

    strlwr(s);

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            continue;
        }
        else
        {
            new[j] = '.';
            j++;
            new[j] = s[i];
            j++;
        }
    }

    new[j] = '\0';

    printf("%s", new);

    return 0;
}