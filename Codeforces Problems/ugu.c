#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, i, j, count = 0;
        scanf("%d", &n);

        char s[n];
        scanf("%s", s);

        for (i = n - 1; i > 0; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
        }
    }
}