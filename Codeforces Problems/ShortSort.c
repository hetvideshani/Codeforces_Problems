#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int flag = 0;
        char s[4];
        scanf("%s", s);

        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        {
            flag = 1;
        }

        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}