#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int i = 0, j = 0, flag = 0;
        char s[51], p[3] = "Yes";
        scanf("%s", &s);

        while (p[i] != s[0])
        {
            i++;
            if (i == 3)
            {
                break;
            }
        }

        if (i == 3)
        {
            printf("NO\n");
            continue;
        }

        while (j < strlen(s))
        {
            if (s[j] != p[i])
            {
                flag = 1;
                break;
            }

            if (i == 2)
            {
                i = 0;
            }
            else
            {
                i++;
            }
            j++;
        }

        if (flag == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}