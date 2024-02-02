#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j, count;
    char s[101];
    scanf("%s", s);

    while (i < strlen(s))
    {
        count = 0;
        for (j = i; j < strlen(s); j++)
        {
            if (s[j] == s[j + 1])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count >= 6)
        {
            break;
        }
        i = j + 1;
    }

    if (count >= 6)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}