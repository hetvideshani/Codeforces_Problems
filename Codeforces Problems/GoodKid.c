#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n], min = 0, mul = 1, i, index = 0;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);

            if (i == 0)
            {
                min = a[0];
                index = 0;
            }
            if (a[i] < min)
            {
                min = a[i];
                index = i;
            }
        }

        a[index]++;

        for (i = 0; i < n; i++)
        {
            mul *= a[i];
        }

        printf("%d\n", mul);
    }
    return 0;
}
// GoodKid