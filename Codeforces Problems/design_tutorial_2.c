#include <stdio.h>

int composite(int a);
int main()
{
    int n, a = 4, b;
    scanf("%d", &n);
    b = n - a;
    for (a = 4; a < n - 4; a++)
    {
        if (composite(b) != 0 && composite(a) != 0)
        {
            b = n - a;
            break;
        }
        b--;
    }
    printf("%d %d", a, b);

    return 0;
}

int composite(int a)
{
    int i, c = 0;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    return c;
}