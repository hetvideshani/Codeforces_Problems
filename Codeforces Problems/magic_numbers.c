#include <stdio.h>
int main()
{
    int n, x, digit, temp, flag = 0;
    ;

    scanf("%d", &n);

    x = n;

    while (x > 0)
    {
        if (x % 10 == 4 && (x / 10) % 10 == 1)
        {
            x = x / 100;
        }

        else if (x % 10 == 4 && (x / 10) % 10 == 4 && (x / 100) % 10 == 1)
        {
            x = x / 1000;
        }

        else if (x % 10 == 1)
        {
            x = x / 10;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}