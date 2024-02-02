#include <stdio.h>

int main()
{
    int n, i = 0, count = 0, j = 0, flag = 1, countm = 1;
    scanf("%d", &n);

    char s[n + 1];

    scanf("%s", s);

    // while (flag == 1)
    // {
    //     flag = 0;
    //     while (i < n)
    //     {
    //         if (s[i] == s[i + 1])
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             i++;
    //         }
    //     }
    //     countm++;
    //     for (i = 0; i < n - countm; i += countm)
    //     {
    //         if (s[i] == s[i + countm])
    //         {
    //             flag = 1;
    //         }
    //     }
    // }

    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}