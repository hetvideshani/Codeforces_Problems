#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);

        if (n % k == 0 || n % 2 == 0 || n % (k + 2) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}