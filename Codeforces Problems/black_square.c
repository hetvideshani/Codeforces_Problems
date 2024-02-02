#include <stdio.h>
#include <string.h>

int main()
{
    int a[4], sum = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    char s[1000001];

    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '1')
        {
            sum += a[0];
        }
        else if (s[i] == '2')
        {
            sum += a[1];
        }
        else if (s[i] == '3')
        {
            sum += a[2];
        }
        else if (s[i] == '4')
        {
            sum += a[3];
        }
    }

    printf("%d", sum);
}