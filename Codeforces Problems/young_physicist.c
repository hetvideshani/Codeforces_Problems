#include <stdio.h>
int main()
{
    int t, suma = 0, sumb = 0, sumc = 0, i;
    scanf("%d", &t);

    int a[t];

    for (i = 0; i < t; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        suma += a;
        sumb += b;
        sumc += c;
    }
    if (suma == 0 && sumb == 0 && sumc == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}