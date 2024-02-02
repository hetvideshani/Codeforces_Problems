#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n, i;
        scanf("%lld", &n);
        int count = 0;

        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                count++;
                if (count == 2)
                {
                    break;
                }
            }
        }

        if (count + 2 == 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}