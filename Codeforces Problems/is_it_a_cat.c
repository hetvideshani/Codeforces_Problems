#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, count = 0, flag = 0;
        scanf("%d", &n);

        char s[n + 1];

        scanf("%s", s);
        j = 0;
        while (s[j] != '\0')
        {
            if (count == 0 && (s[j] == 'M' || s[j] == 'm'))
            {
                count++;
            }
            else if (count == 1 && (s[j] == 'M' || s[j] == 'm'))
            {
            }

            else if (count == 1 && (s[j] == 'E' || s[j] == 'e'))
            {
                count++;
            }
            else if (count == 2 && (s[j] == 'E' || s[j] == 'e'))
            {
            }

            else if (count == 2 && (s[j] == 'O' || s[j] == 'o'))
            {
                count++;
            }
            else if (count == 3 && (s[j] == 'O' || s[j] == 'o'))
            {
            }

            else if (count == 3 && (s[j] == 'W' || s[j] == 'w'))
            {
                count++;
            }
            else if (count == 4 && (s[j] == 'W' || s[j] == 'w'))
            {
            }
            else
            {
                flag = 1;
                break;
            }
            j++;
        }

        if (flag == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}