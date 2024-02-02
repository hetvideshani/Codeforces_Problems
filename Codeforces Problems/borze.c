#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char s[201];
    scanf("%s", s);

    while (s[i] != '\0')
    {
        if (s[i] == '.')
        {
            printf("0");
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            printf("1");
            i += 2;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            printf("2");
            i += 2;
        }
    }
}