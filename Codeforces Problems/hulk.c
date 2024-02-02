#include <stdio.h>
int main()
{
    int n, count = 1;
    scanf("%d", &n);

    while (n > 0)
    {
        if (count % 2 != 0)
        {
            printf("I hate");
        }
        else
        {
            printf("I love");
        }
        n--;
        count++;
        if (n >= 1)
        {
            printf(" that ");
        }
    }

    printf(" it");
}