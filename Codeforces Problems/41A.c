#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], t[101];
    int i, count, j, x = 0;

    scanf("%s", s);
    scanf("%s", t);

    for (i = 0, j = strlen(t) - 1; i < strlen(s); i++, j--)
    {
        if (s[i] != t[j])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}