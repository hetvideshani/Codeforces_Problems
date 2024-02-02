#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, fsmall = 0, fcap = 0, fdigit = 0;
    char s[101];
    scanf("%s", s);

    if (strlen(s) < 5)
    {
        printf("Too weak");
        return 0;
    }

    while (i < strlen(s))
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            fcap = 1;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            fsmall = 1;
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            fdigit = 1;
        }

        if (fsmall == 1 && fdigit == 1 && fcap == 1)
        {
            printf("Correct");
            return 0;
        }
        i++;
    }

    printf("Too weak");
    return 0;
}