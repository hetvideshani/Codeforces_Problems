#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, flag = 0;
    char s[100000];
    scanf("%s", s);

    // printf("%d\n", strlen(s));

    for (i = 0, j = strlen(s) - 1; i < strlen(s) / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            printf("NO");
            return 0;
        }
    }

    for (i = 0; i <= strlen(s) / 2; i++)
    {
        if (s[i] == 'A' || s[i] == 'H' || s[i] == 'I' || s[i] == 'M' || s[i] == 'O' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y')
        {
            continue;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}