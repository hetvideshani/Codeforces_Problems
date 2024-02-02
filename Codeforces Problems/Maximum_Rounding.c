#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int i = 0, j = 0, k = 0;

        char s[50];

        scanf("%s", s);
        printf("%s\n", s);

        strrev(s);
        printf("%s\n", s);

        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] > '4')
            {
                s[i + 1]++;

                for (k = i; k >= j; k--)
                {
                    s[k] = '0';
                }
                j = i;
            }
        }

        strrev(s);

        printf("%s\n", s);
    }
    return 0;
}