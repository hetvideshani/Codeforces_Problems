#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];

    scanf("%s", s);

    int a[10], i, j = 0, k = 10;

    for (i = 0; i < 10; i++)
    {
        a[i] = 0;
    }

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'L')
        {

            a[j] = 1;
            j++;
        }

        else if (s[i] == 'R')
        {
            a[k] = 1;
            k--;
        }

        else
        {
            int x;
            x = s[i] - 48;

            a[x] = 0;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
}