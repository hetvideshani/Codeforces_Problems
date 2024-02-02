#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 0;
    char s[2];

    scanf("%s", s);

    // printf("%s\n%s", s, p);
    for (int x = 0; x < 5; x++)
    {
        char p[3];

        scanf("%s", p);

        if (s[0] == p[0] || s[1] == p[1])
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}