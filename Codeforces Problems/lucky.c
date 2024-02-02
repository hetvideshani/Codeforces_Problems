#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, x, y;
        scanf("%d", &n);
        x = n;

        y = n % 10;
        n = n / 10;
        y = (n % 10) + y;
    }
}