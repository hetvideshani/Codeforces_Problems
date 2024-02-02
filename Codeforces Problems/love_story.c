#include <stdio.h>
int main()
{
    int t, i, j;
    char s[11] = "codeforces";

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int count = 0;
        char p[11];
        scanf("%s", p);

        for (j = 0; j < 10; j++)
        {
            if (s[j] != p[j])
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}