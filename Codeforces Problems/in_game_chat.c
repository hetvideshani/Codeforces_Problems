#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j, count = 0;
        scanf("%d", &n);

        char s[n];
        scanf("%s", s);

        j = n - 1;

        while (s[j] == ')')
        {
            count++;
            j--;
        }

        if (count > strlen(s) - count)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}