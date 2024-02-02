#include <stdio.h>
#include <string.h>

int main()
{

    int t, i, j, count = 0;
    scanf("%d", &t);

    char d[31] = "314159265358979323846264338327";

    // printf("%s", d);

    for (i = 0; i < t; i++)
    {
        count = 0;
        char s[31];
        scanf("%s", s);

        for (j = 0; j < strlen(s); j++)
        {
            if (s[j] == d[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }

        // printf("%s %s", s, d);

        printf("%d\n", count);
    }

    return 0;
}
