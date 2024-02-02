#include <stdio.h>
#include <string.h>
int main()
{
    int t, j;
    scanf("%d", &t);

    for (j = 0; j < t; j++)
    {
        char s[51];
        scanf("%s", s);

        int i, flag = 0;

        for (i = 0; i < (strlen(s) / 2) - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}