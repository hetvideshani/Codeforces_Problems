#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int a[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    i = 0;
    while (a[i] <= n)
    {
        if (n % a[i] == 0)
        {
            printf("YES");
            return 0;
        }
        i++;
        if (i == 14)
        {
            break;
        }
    }

    printf("NO");
    return 0;
}