#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);

    int i = 0;

    while (i < strlen(s))
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'n')
        {
            i++;
        }
        else
        {
            if (i == strlen(s) - 1)
            {
                printf("NO");
                return 0;
            }

            if (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
            {
                i++;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");
    return 0;
}