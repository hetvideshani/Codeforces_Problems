#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("%d", n);
    }
    else
    {
        int a = 0, x = 0, b = 0, y = 0;
        a = n % 10; // a==0
        n = n / 10; // x==1
        b = n % 10; // b=1
        n = n / 10; // y=0

        x = (n * 10) + b;
        y = (n * 10) + a;

        if (x > y)
        {
            printf("%d", x);
        }
        else
        {
            printf("%d", y);
        }
    }
}