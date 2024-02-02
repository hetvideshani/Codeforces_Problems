#include <stdio.h>
int main()
{
    int i, flag = 0;
    char s[101];
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}