#include <stdio.h>
int main()
{
    int t, i, temp, sum = 0;
    scanf("%d", &t);

    char s[t], str[t];
    scanf("%s", s);
    scanf("%s", str);

    for (i = 0; i < t; i++)
    {
        if (s[i] - str[i] < 0)
        {
            temp = str[i] - s[i];
        }
        else
        {
            temp = s[i] - str[i];
        }
        if (temp >= 6)
        {
            temp = 10 - temp;
        }

        sum += temp;
    }

    printf("%d", sum);

    return 0;
}