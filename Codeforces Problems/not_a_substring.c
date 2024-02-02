#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[51];
        scanf("%s", s);

        int i, j, count = 0, flag = 0;

        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] == '(')
            {
                count++;
            }
            else
            {
                count--;
            }

            if (count < 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1 || count != 0)
        {
            printf("YES\n");
            for (i = 0; i < strlen(s); i++)
            {
                printf("(");
            }
            for (i = 0; i < strlen(s); i++)
            {
                printf(")");
            }
            printf("\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}