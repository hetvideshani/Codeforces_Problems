#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);

    if (a + b + 1 >= n)
    {
        printf("%d", n - a);
    }
    else
    {
        printf("%d", b + 1);
    }
}