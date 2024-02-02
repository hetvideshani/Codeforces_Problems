#include <stdio.h>
#include <string.h>
int main()
{
    char s[51];
    int i, count = 0;

    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }

    if (count > strlen(s) / 2)
    {                            // aaxxaaxxxy
        printf("%d", strlen(s)); // abababababab
    }
    else
    {
        printf("%d", (2 * count) - 1);
    }
}