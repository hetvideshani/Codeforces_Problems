#include <stdio.h>
int main()
{
    int t = 1;
    char c;

    scanf("%d", &t);
    scanf("%c", &c);

    for (int i = 0; i < t; i++)
    {
        int j, k, flag = 0;
        char s[3][3], ch;

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%c", &s[j][k]);
            }
            scanf("%c", &ch);
        }

        // for (j = 0; j < 3; j++)
        // {
        //     printf("%c%c%c\n", s[j][0], s[j][1], s[j][2]);
        // }

        for (j = 0; j < 3; j++)
        {
            if (s[j][0] == s[j][1] && s[j][0] == s[j][2] && s[j][0] != '.')
            {
                flag = 1;
                printf("%c\n", s[j][0]);
                break;
            }
        }

        if (flag == 1)
        {
            continue;
        }

        for (j = 0; j < 3; j++)
        {
            if (s[0][j] == s[1][j] && s[0][j] == s[2][j] && s[0][j] != '.')
            {
                flag = 1;
                printf("%c\n", s[0][j]);
                break;
            }
        }

        if (flag == 1)
        {
            continue;
        }

        if (s[0][0] == s[1][1] && s[0][0] == s[2][2] && s[0][0] != '.')
        {
            flag = 1;
            printf("%c\n", s[0][0]);
            continue;
        }

        if (s[0][2] == s[1][1] && s[0][2] == s[2][0] && s[0][2] != '.')
        {
            flag = 1;
            printf("%c\n", s[0][2]);
            continue;
        }

        printf("DRAW\n");
    }
}