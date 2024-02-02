#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int j = 0, count = 0;
        char s[101];
        scanf("%s", s);

        if (strlen(s) <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c", s[j]);

            while (j < strlen(s) - 2)
            {
                count++;
                j++;
            }
            printf("%d", count);
            printf("%c\n", s[j + 1]);
        }
    }
}