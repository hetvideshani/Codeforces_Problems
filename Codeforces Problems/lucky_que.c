#include <stdio.h>
#include <string.h>
int main()
{
    int t, i;
    char ch;
    scanf("%d", &t);
    scanf("%c", &ch);

    for (i = 0; i < t; i++)
    {
        char s[6];
        scanf("%s", s);

        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}