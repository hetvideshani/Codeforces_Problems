#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, count = 0, t;
    char s[101], ch = 'a';
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {
        t = s[i] - ch;
        if (t < 0)
        {
            if (t < -13)
            {
                count += 26 + t;
            }
            else
            {
                count += -1 * t;
            }
        }
        else if (t <= 13) //
        {
            count += t; //
        }
        else
        {
            count += 26 - t; // 1+5=6+10=16
        }

        ch = s[i];
    }

    printf("%d", count);

    return 0;
}