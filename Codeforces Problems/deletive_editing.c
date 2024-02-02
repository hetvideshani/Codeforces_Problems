#include <stdio.h>
#include <string.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int j = 0, k = 0, flag = 0;
        char a[31], b[31], c[31];

        scanf("%s%s", a, b);

        while (b[k] != '\0' && j < strlen(a))
        {
            if (a[j] == b[k])
            {
                c[k] = a[j];
                k++;
            }
            j++;
        }
        c[k] = '\0';

        while (a[j] != '\0')
        {
            for (k = 0; k < strlen(b); k++)
            {
                if (a[j] == b[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
            j++;
        }

        if (strcmp(b, c) == 0 && flag == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}