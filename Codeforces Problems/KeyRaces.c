#include <stdio.h>
int main()
{
    int n, v1, v2, t1, t2, sum1 = 0, sum2 = 0;
    scanf("%d%d%d%d%d", &n, &v1, &v2, &t1, &t2);

    sum1 = (v1 * n) + (2 * t1);
    sum2 = (v2 * n) + (2 * t2);

    if (sum1 < sum2)
    {
        printf("First");
    }
    else if (sum1 > sum2)
    {
        printf("Second");
    }
    else
    {
        printf("Friendship");
    }

    return 0;
}

// KeyRaces