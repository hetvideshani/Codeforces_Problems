#include <stdio.h>
#include <math.h>
int main()
{
    int a[3], b[3], i, n, suma = 0, sumb = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        suma += a[i];
    }

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
        sumb += b[i];
    }

    scanf("%d", &n);

    suma = ceil(suma / 5.0);
    sumb = ceil(sumb / 10.0);

    // printf("%d %d", suma, sumb);

    if (suma + sumb > n)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}