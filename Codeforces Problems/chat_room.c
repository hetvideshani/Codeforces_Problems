#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0;
    char s[101];
    scanf("%s", s);

    char p[5] = "hello";

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == p[j] && j < 5)
        {
            j++;
            // printf("%d\n", j);
        }
    }

    if (j == 5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}