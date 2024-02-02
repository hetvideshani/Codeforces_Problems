#include <stdio.h>
#include <string.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int j, flag = 0;
        char s[101];
        scanf("%s", s);

        if (strlen(s) % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            for (j = 0; j < strlen(s) / 2; j++)
            {
                if (s[j] != s[j + (strlen(s) / 2)])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}