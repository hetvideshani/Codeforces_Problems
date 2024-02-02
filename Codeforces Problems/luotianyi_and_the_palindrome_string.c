#include <stdio.h>
#include <string.h>

int main()
{
    int i, t;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int j, flag = 0;
        char s[51];
        scanf("%s", s);

        j = 0;

        for (j = 0; j < strlen(s) - 1; j++)
        {
            if (s[j] != s[j + 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", strlen(s) - 1);
        }
    }
}