#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n < 2020)
        {
            if ((n + 2021) % 2020 == 0 || (n + 2020) % 2021 == 0 || (n + 2020) % 2020 == 0 || (n + 2021) % 2021 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (n % 2020 == 0 || n % 2021 == 0)
        {
            printf("YES\n");
        }
        else
        {
            if (n % 2020 == 1 || n % 2021 == 2020)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}