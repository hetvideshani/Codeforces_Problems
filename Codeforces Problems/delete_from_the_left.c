#include <stdio.h>
#include <string.h>
int main()
{
    char s[200001], t[200001];
    long int i, j, count = 0, total = 0;

    scanf("%s%s", s, t);

    for (i = strlen(s) - 1, j = strlen(t) - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (s[i] == t[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }

    total = strlen(s) - count + strlen(t) - count;

    printf("%ld", total);
}